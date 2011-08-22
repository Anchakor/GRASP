#include "graph.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
}

Graph::Graph(rdf::Node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    contextChanged();
}

class AddEdgeNodeNotFoundException {};
void Graph::contextChanged()
{
    librdf_stream *stream = librdf_model_context_as_stream(rdf::model, *context_);
    if(NULL == stream) throw rdf::StreamConstructException();

    while(!librdf_stream_end(stream)) {
        librdf_statement *statement = librdf_stream_get_object(stream);
        if(NULL == statement) throw rdf::StatementConstructException();

        if(true) { // triple/property not blacklisted TODO
            librdf_node *node = librdf_statement_get_subject(statement);
            rdf::Node x(node);
//          printf("DEBUG subj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(x)));
            printf("DEBUG subj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(x)));
            if(!nodes_.contains(x)) {
                GraphNode *n = new GraphNode();
                n->setNode(
                    nodes_.insert(rdf::Node(node), n)
                        .key());
                addItem(n);
                n->setPos(qrand(),qrand());
            }
            node = librdf_statement_get_object(statement);
            rdf::Node y(node);
            printf("DEBUG obj node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(y)));
            if(!nodes_.contains(y)) {
                GraphNode *n = new GraphNode();
                n->setNode(
                    nodes_.insert(rdf::Node(node), n)
                        .key());
                addItem(n);
                n->setPos(qrand(),qrand());
            }
                rdf::Node nodex = librdf_statement_get_predicate(statement);
                printf("DEBUG pred node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(nodex)));
            rdf::Statement z(statement);
            if(!edges_.contains(z)) {
                GraphEdge *e = new GraphEdge();
                e->setStatement(
                        edges_.insert(rdf::Statement(statement), e)
                            .key());

                //if(nodes_.value(reinterpret_cast<const char *>(librdf_node_to_string(node)) == 0) throw AddEdgeNodeNotFoundException();
                if(!nodes_.contains(x)) throw AddEdgeNodeNotFoundException();
                e->setSourceNode(nodes_.value(x));
                if(!nodes_.contains(y)) throw AddEdgeNodeNotFoundException();
                e->setDestNode(nodes_.value(y));

                librdf_node *node = librdf_statement_get_predicate(statement);
                e->setText(qstrdup(reinterpret_cast<const char *>(librdf_node_to_string(node))));

                e->adjust();
            }
        }
        if(librdf_stream_next(stream)) break;
    }

    librdf_free_stream(stream);
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
    QList<GraphNode *> nl = nodes_.values();
    for (int i = 0; i < nl.size(); ++i) {
        delete nl.at(i);
    }
    QList<GraphEdge *> el = edges_.values();
    for (int i = 0; i < el.size(); ++i) {
        delete el.at(i);
    }
}
