#include "graph.h"
#include "rdf.h"
#include "persistentcounter.h"
#include "mainwindow.h"
#include "contextmenu.h"


Graph::Graph(QObject *parent) : QGraphicsScene(parent)
{
}

void Graph::init()
{
    contextChanged();
}

Graph *Graph::newEmpty(QObject *parent)
{
    Graph *g = new Graph(parent);
    g->nstack_ = raptor_new_namespaces(rdf::raptor, 2);

    QString s(GRASPURIPREFIX);
    s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
    rdf::URI contextURI (rdf::world, (unsigned char *)s.toLatin1().constData());

    g->context_ = rdf::Node(rdf::world, contextURI);
    rdf::contexts.insert(&(g->context_));
    g->init();
    return g;
}

Graph *Graph::fromFile(const QString &path, const char *mimeType, librdf_uri *baseUri, QObject *parent)
{
    Graph *g = new Graph(parent);
    rdf::Parser parser (rdf::world, NULL, mimeType, NULL);

    g->file_ = path;

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) throw rdf::FileOpenException();

    librdf_stream *stream = librdf_parser_parse_string_as_stream(parser, (const unsigned char *)(file.readAll().constData()), baseUri);
    if(NULL == stream) { 
        throw rdf::ParsingException();
    }

    QString s(GRASPURIPREFIX);
    s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
    rdf::URI contextURI (rdf::world, (unsigned char *)s.toLatin1().constData());

    g->context_ = rdf::Node(rdf::world, contextURI);
    rdf::contexts.insert(&(g->context_));

    if(0 != librdf_storage_context_add_statements(rdf::storage, g->context_, stream)) {
        throw rdf::ModelAccessException();
    }

    g->nstack_ = rdf::getParsedNamespaces(parser, &(g->nslist_));

    // load node positions
    bool foundLensDef = false;
    rdf::Node lensDef ("http://mud.cz/sw/ed#lens/test");

    file.reset();
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        if(line.size() < 10) continue;
        QList<QByteArray> lineParts = line.split(' ');
        if(lineParts.at(0) == QString(LENSCOMMENTPREFIX)) {
            LensActions::const_iterator i = lensActions.constBegin();
            while (i != lensActions.constEnd()) {
                QByteArray at1 (lineParts.at(1));
                at1.replace("\n", QByteArray());
                if(QString(at1) == QString::number(qHash(i.value()))) {
                    foundLensDef = true;
                    //printf("found lensDef: %s\n", sl);
                    lensDef = i.value();
                    break;
                }
                ++i;
            }
        } else if(lineParts.at(0) == QString(NODEPOSITIONCOMMENTPREFIX)) {
            if(lineParts.size() < 4) continue;
            bool ok = false;
            float x = lineParts.at(1).toFloat(&ok);
            if(!ok) continue;
            float y = lineParts.at(2).toFloat(&ok);
            if(!ok) continue;
            QByteArray at3 (lineParts.at(3));
            at3.replace("\n", QByteArray());
            uint u = at3.toUInt(&ok);
            if(!ok) continue;
            //printf("NP: %f %f %i\n", x, y, u);
            g->loadedNodePositions_.insert(u, QPointF(x, y));
        }
    }

    librdf_free_stream(stream);
    if(foundLensDef) g->lens_.loadLens(lensDef);
    g->init();
    return g;
}

Graph *Graph::fromURI(const QString &uri, const char *mimeType, librdf_uri *baseUri, QObject *parent)
{
    Graph *g = new Graph(parent);
    rdf::Parser parser (rdf::world, NULL, mimeType, NULL);

    rdf::URI lURI (rdf::world, (unsigned char *)uri.toLatin1().constData());

    librdf_stream *stream = librdf_parser_parse_as_stream(parser, lURI, baseUri);
    if(NULL == stream) { 
        throw rdf::ParsingException();
    }

    QString s(GRASPURIPREFIX);
    s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
    rdf::URI contextURI (rdf::world, (unsigned char *)s.toLatin1().constData());

    g->context_ = rdf::Node(rdf::world, contextURI);
    rdf::contexts.insert(&(g->context_));

    if(0 != librdf_storage_context_add_statements(rdf::storage, g->context_, stream)) {
        throw rdf::ModelAccessException(); 
    }

    g->nstack_ = rdf::getParsedNamespaces(parser, &(g->nslist_));

    librdf_free_stream(stream);
    g->init();
    return g;
}

uint Graph::hashNode(rdf::Node n)
{
    uint v = qHash(n);
    if(librdf_node_is_blank(n) && bnodeHashes_.contains(v)) {
        return bnodeHashes_.value(v);
    }
    return v;
}

class AddEdgeNodeNotFoundException {};
void Graph::contextChanged()
{
    //if(focusItem()) //TODO centering view (QGraphicsView::centerOn(...)) after positioning
    nodes_.clear();
    edges_.clear();
    clear();

    librdf_stream *stream = librdf_model_context_as_stream(rdf::model, context_);
    if(NULL == stream) throw rdf::StreamConstructException();

    while(!librdf_stream_end(stream)) {
        librdf_statement *statement = librdf_stream_get_object(stream);
        if(NULL == statement) throw rdf::StatementConstructException();

        rdf::Node nodesubj (librdf_statement_get_subject(statement));
        rdf::Node nodeobj (librdf_statement_get_object(statement));
        rdf::Node nodepred (librdf_statement_get_predicate(statement));

        if((Ui::viewUnusedNodes && Ui::viewUnusedNodes->isChecked()) || !(lens_.whitelistMode_ ^ lens_.propertyList_.contains(nodepred))) {
            if(!nodes_.contains(nodesubj)) {
                GraphNode *n = new GraphNode();
                addItem(n);
                n->setNode(const_cast<rdf::Node&>(
                    nodes_.insert(nodesubj, n)
                        .key()));
            }
            if(!nodes_.contains(nodeobj) && !(lens_.aggregateLiterals_ && librdf_node_is_literal(nodeobj))) {
                GraphNode *n = new GraphNode();
                addItem(n);
                n->setNode(const_cast<rdf::Node&>(
                    nodes_.insert(nodeobj, n)
                        .key()));
            }
        }
        if(!(lens_.whitelistMode_ ^ lens_.propertyList_.contains(nodepred)) && !(lens_.aggregateLiterals_ && librdf_node_is_literal(nodeobj))) { // triple/property not blacklisted

            rdf::Statement z(statement);
            if(!edges_.contains(z)) {
                GraphEdge *e = new GraphEdge();
                addItem(e);
                e->setStatement(const_cast<rdf::Statement&>(
                        edges_.insert(z, e)
                            .key()));

                if(!nodes_.contains(nodesubj)) throw AddEdgeNodeNotFoundException();
                e->setSourceNode(nodes_.value(nodesubj));
                if(!nodes_.contains(nodeobj)) throw AddEdgeNodeNotFoundException();
                e->setDestNode(nodes_.value(nodeobj));
            }
        }
        if(librdf_stream_next(stream)) break;
    }

    Nodes::const_iterator i = nodes_.constBegin();
    while (i != nodes_.constEnd()) {
        if(librdf_node_is_blank(i.key()) && !bnodeHashes_.contains(qHash(i.key()))) bnodeHashes_.insert(qHash(i.key()), bnodeHashes_.size() + 1);
        uint u = hashNode(i.key());
        //qDebug() << u << qHash(i.key()) << i.key().toQString();
        if(loadedNodePositions_.contains(u)) {
            i.value()->setPos(loadedNodePositions_.value(u));
            //printf("load: %f %f\n", loadedNodePositions_.value(u).x(), loadedNodePositions_.value(u).y());
        } else {
            i.value()->setPos((qrand()*1000.0)/RAND_MAX,(qrand()*1000.0)/RAND_MAX);
        }
        i.value()->contextChanged();
        ++i;
    }

    layoutGraph(this);

    librdf_free_stream(stream);
    this->update();
}

rdf::Node Graph::getContext() 
{
    return rdf::Node(context_);
}

void Graph::saveFile()
{
    //qDebug(file_.toLatin1().constData());
    if(!file_.isEmpty()) {
        FILE *file = fopen(file_.toLatin1().constData(), "w");
        rdf::NSHash::const_iterator i = nslist_.constBegin();
        while (i != nslist_.constEnd()) {
            fprintf(file, "@prefix %s: <%s> .\n", (*i).first.toLatin1().constData(), (*i).second.toLatin1().constData());
            ++i;
        }
        rdf::saveGraphToFile(context_, file);

        // write node positions
        LoadedNodePositions::const_iterator j = loadedNodePositions_.constBegin();
        while (j != loadedNodePositions_.constEnd()) {
            QString out (NODEPOSITIONCOMMENTPREFIX);
            out.append(' ').append(QString::number(j.value().x())).append(' ').append(QString::number(j.value().y())).append(' ').append(QString::number(j.key()));
            fprintf(file, "%s\n", out.toLatin1().constData());
            ++j;
        }
        QString outl (LENSCOMMENTPREFIX);
        outl.append(' ').append(QString::number(qHash(lens_.lensNode_)));
        fprintf(file, "%s\n", outl.toLatin1().constData());

        fclose(file);
    } else
        saveFileAs();
}

void Graph::saveFileAs()
{
    QString fileName = QFileDialog::getSaveFileName(NULL, tr("Save"), QString(), tr("Turtle files (*.ttl)"));
    file_ = fileName;
    saveFile();
}

void Graph::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    QGraphicsScene::contextMenuEvent(event);
    if(event->isAccepted()) return;

    ContextMenu menu (this);
    menu.addGeneralGraphActions();
    menu.exec(event->screenPos());
    //menu.exec(g->views().at(0)->mapFromScene(mapToScene(QPoint(0,0))));
}

Graph::~Graph()
{
    //raptor_free_namespaces(nstack_);
}
