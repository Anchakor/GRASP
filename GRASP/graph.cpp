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

    g->nstack_ = rdf::getParsedNamespaces(parser, &(g->nshash_));

    // load node positions
    bool foundLensDef = false;
    rdf::Node lensDef ("http://mud.cz/sw/ed#lens/test");

    file.reset();
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        if(line.size() < 10) continue;
        QList<QByteArray> lineParts = line.split(' ');
        if(lineParts.at(0) == QString(LENSCOMMENTPREFIX)) {
            //TODO
            QMap<QAction *, rdf::Node>::const_iterator i = lensActions.constBegin();
            while (i != lensActions.constEnd()) {
                char *sl = i.value().serialize();
                QByteArray at1 (lineParts.at(1));
                at1.replace("\n", QByteArray());
                if(QString(at1) == QString::number(qHash(QByteArray(sl)))) {
                    foundLensDef = true;
                    //printf("found lensDef: %s\n", sl);
                    lensDef = i.value();
                    free(sl);
                    break;
                }
                free(sl);
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

    g->nstack_ = rdf::getParsedNamespaces(parser, &(g->nshash_));

    librdf_free_stream(stream);
    g->init();
    return g;
}

class AddEdgeNodeNotFoundException {};
void Graph::contextChanged()
{
    nodes_.clear();
    edges_.clear();
    clear();

    librdf_stream *stream = librdf_model_context_as_stream(rdf::model, context_);
    if(NULL == stream) throw rdf::StreamConstructException();

    while(!librdf_stream_end(stream)) {
        librdf_statement *statement = librdf_stream_get_object(stream);
        if(NULL == statement) throw rdf::StatementConstructException();

        rdf::Node nodepred (librdf_statement_get_predicate(statement));
        //printf("DEBUG pred node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(nodepred)));
        if(!(lens_.whitelistMode_ ^ lens_.propertyList_.contains(nodepred))) { // triple/property not blacklisted
            librdf_node *node = librdf_statement_get_subject(statement);
            rdf::Node x(node);
            //printf("DEBUG subj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(x)));
            if(!nodes_.contains(x)) {
                GraphNode *n = new GraphNode();
                addItem(n);
                n->setNode(
                    nodes_.insert(rdf::Node(node), n)
                        .key());
            }
            node = librdf_statement_get_object(statement);
            rdf::Node y(node);
            //printf("DEBUG obj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(y)));
            if(!nodes_.contains(y)) {
                GraphNode *n = new GraphNode();
                addItem(n);
                n->setNode(
                    nodes_.insert(rdf::Node(node), n)
                        .key());
            }
            rdf::Statement z(statement);
            if(!edges_.contains(z)) {
                GraphEdge *e = new GraphEdge();
                addItem(e);
                e->setStatement(
                        edges_.insert(rdf::Statement(statement), e)
                            .key());

                //if(nodes_.value(reinterpret_cast<const char *>(librdf_node_to_string(node)) == 0) throw AddEdgeNodeNotFoundException();
                if(!nodes_.contains(x)) throw AddEdgeNodeNotFoundException();
                e->setSourceNode(nodes_.value(x));
                if(!nodes_.contains(y)) throw AddEdgeNodeNotFoundException();
                e->setDestNode(nodes_.value(y));
            }
        }
        if(librdf_stream_next(stream)) break;
    }

    QHash<rdf::Node, GraphNode *>::const_iterator i = nodes_.constBegin();
    while (i != nodes_.constEnd()) {
        char *s = i.key().serialize();
        uint u = qHash(QByteArray(s));
        if(loadedNodePositions_.contains(u)) {
            i.value()->setPos(loadedNodePositions_.value(u));
            //printf("load: %f %f\n", loadedNodePositions_.value(u).x(), loadedNodePositions_.value(u).y());
        } else {
            i.value()->setPos((qrand()*1000.0)/RAND_MAX,(qrand()*1000.0)/RAND_MAX);
        }
        i.value()->contextChanged();
        ++i;
        free(s);
    }

    librdf_free_stream(stream);
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
        QHash<QString, QString>::const_iterator i = nshash_.constBegin();
        while (i != nshash_.constEnd()) {
            fprintf(file, "@prefix %s: <%s> .\n", i.key().toLatin1().constData(), i.value().toLatin1().constData());
            ++i;
        }
        rdf::saveGraphToFile(context_, file);

        // write node positions
        //QHash<rdf::Node, GraphNode *>::const_iterator j = nodes_.constBegin();
        QHash<uint, QPointF>::const_iterator j = loadedNodePositions_.constBegin();
        while (j != loadedNodePositions_.constEnd()) {
            QString out (NODEPOSITIONCOMMENTPREFIX);
            out.append(' ').append(QString::number(j.value().x())).append(' ').append(QString::number(j.value().y())).append(' ').append(QString::number(j.key()));
            fprintf(file, "%s\n", out.toLatin1().constData());
            ++j;
        }
        char *sl = lens_.lensNode_.serialize();
        QString outl (LENSCOMMENTPREFIX);
        outl.append(' ').append(QString::number(qHash(QByteArray(sl))));
        fprintf(file, "%s\n", outl.toLatin1().constData());
        free(sl);

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
