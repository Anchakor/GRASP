#include "graph.h"
#include "rdf.h"
#include "persistentcounter.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent), context_(rdf::world)
{
    init();
}

Graph::Graph(const QString &file, const char *mimeType, librdf_uri *baseUri, QObject *parent) : QGraphicsScene(parent), file_(file)
{
    loadGraphFromFile(file, mimeType, baseUri);
    init();
}

Graph::Graph(rdf::Node &context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    init();
}

Graph::Graph(rdf::Node &context, raptor_namespace_stack *nstack, QHash<QString, QString> &nshash, QObject *parent) : QGraphicsScene(parent), nshash_(nshash), nstack_(nstack), context_(context)
{
    init();
}

Graph::Graph(rdf::Node &context, QString &file, QObject *parent) : QGraphicsScene(parent), file_(file), context_(context)
{
    init();
}

Graph::Graph(rdf::Node &context, QString &file, raptor_namespace_stack *nstack, QHash<QString, QString> &nshash, QHash<uint, QPointF> &loadedNodePositions, QObject *parent) : QGraphicsScene(parent), nshash_(nshash), nstack_(nstack), file_(file), loadedNodePositions_(loadedNodePositions), context_(context)
{
    nstack_ = nstack;
    init();
}
void Graph::init()
{
    lens_ = new Lens();
    rdf::Node n ("http://mud.cz/sw/ed#lens/test");
    lens_->loadLens(n);
    contextChanged();
}

void Graph::loadGraphFromFile(const QString &path, const char *mimeType, librdf_uri *baseUri)
{
    rdf::Parser parser (rdf::world, NULL, mimeType, NULL);

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) throw rdf::FileOpenException();

    librdf_stream *stream = librdf_parser_parse_string_as_stream(parser, (const unsigned char *)(file.readAll().constData()), baseUri);
    if(NULL == stream) { 
        throw rdf::ParsingException();
    }

    QString s(GRASPURIPREFIX);
    s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
    rdf::URI contextURI (rdf::world, (unsigned char *)s.toLatin1().constData());

    //rdf::Node *cont = new rdf::Node(rdf::world, contextURI);
    //context_ = *cont;
    context_ = rdf::Node(rdf::world, contextURI);
    rdf::contexts.insert(&context_);

    if(0 != librdf_storage_context_add_statements(rdf::storage, context_, stream)) {
        throw rdf::ModelAccessException();
    }

    nstack_ = rdf::getParsedNamespaces(parser, &nshash_);

    // load node positions
    file.reset();
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        if(line.size() < 20) continue;
        QList<QByteArray> lineParts = line.split(' ');
        if(lineParts.size() < 4) continue;
        if(lineParts.at(0) != QString(NODEPOSITIONCOMMENTPREFIX)) continue;
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
        loadedNodePositions_.insert(u, QPointF(x, y));
    }

    librdf_free_stream(stream);
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
        if(!(lens_->whitelistMode_ ^ lens_->propertyList_.contains(nodepred))) { // triple/property not blacklisted
            librdf_node *node = librdf_statement_get_subject(statement);
            rdf::Node x(node);
            //printf("DEBUG subj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(x)));
            if(!nodes_.contains(x)) {
                GraphNode *n = new GraphNode();
                addItem(n);
                n->setNode(
                    nodes_.insert(rdf::Node(node), n)
                        .key());
                n->setPos((qrand()*1000.0)/RAND_MAX,(qrand()*1000.0)/RAND_MAX);
                n->contextChanged();
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
                n->setPos((qrand()*1000.0)/RAND_MAX,(qrand()*1000.0)/RAND_MAX);
                n->contextChanged();
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
        }
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
        QHash<rdf::Node, GraphNode *>::const_iterator j = nodes_.constBegin();
        while (j != nodes_.constEnd()) {
            char *s = j.key().serialize();
            QString out (NODEPOSITIONCOMMENTPREFIX);
            out.append(' ').append(QString::number(j.value()->x())).append(' ').append(QString::number(j.value()->y())).append(' ').append(QString::number(qHash(QByteArray(s))));
            fprintf(file, "%s\n", out.toLatin1().constData());
            ++j;
            free(s);
        }
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


/*
const QHash<librdf_node *, GraphNode *> *Graph::nodes() const
{
    return &nodes_;
}

const QHash<librdf_statement *, GraphEdge *> *Graph::edges() const
{
    return &edges_;
}*/

Graph::~Graph()
{
    delete lens_;
    //raptor_free_namespaces(nstack_);
    /*QList<GraphNode *> nl = nodes_.values();
    for (int i = 0; i < nl.size(); ++i) {
        delete nl.at(i);
    }
    QList<GraphEdge *> el = edges_.values();
    for (int i = 0; i < el.size(); ++i) {
        delete el.at(i);
    }*/
}
