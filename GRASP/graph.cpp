#include "graph.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
}

Graph::Graph(librdf_node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    contextChanged();
}

class AddEdgeNodeNotFoundException {};
void Graph::contextChanged()
{
    librdf_stream *stream = librdf_model_context_as_stream(rdf::model, context_);
    if(NULL == stream) throw rdf::StreamConstructException();

    while(!librdf_stream_end(stream)) {
        librdf_statement *statement = librdf_stream_get_object(stream);
        if(NULL == statement) throw rdf::StatementConstructException();

// TODO
// canonical serialization of node & statement to remove the frickin' pointers in the QHash


        if(true) { // triple/property not blacklisted TODO
            librdf_node *node = librdf_statement_get_subject(statement);
            rdf::Node x(node);
            if(!nodes_.contains(x)) {
                GraphNode *n = new GraphNode();
                n->setNode(node);
                nodes_.insert(const_cast<librdf_node *>(n->node()), n);
                addItem(n);
                n->setPos(qrand(),qrand());
            }
            node = librdf_statement_get_subject(statement);
            rdf::Node y(node);
            if(!nodes_.contains(y)) {
                GraphNode *n = new GraphNode();
                n->setNode(node);
                nodes_.insert(const_cast<librdf_node *>(n->node()), n);
                addItem(n);
                n->setPos(qrand(),qrand());
            }
            rdf::Statement z(statement);
            if(!edges_.contains(z)) {
                GraphEdge *e = new GraphEdge();
                e->setStatement(statement);
                edges_.insert(const_cast<librdf_statement *>(e->statement()), e);

                node = librdf_statement_get_subject(statement);
                if(nodes_.value(node) == 0) throw AddEdgeNodeNotFoundException();
                e->setSourceNode(nodes_.value(node));
                node = librdf_statement_get_object(statement);
                if(nodes_.value(node) == 0) throw AddEdgeNodeNotFoundException();
                e->setDestNode(nodes_.value(node));

                node = librdf_statement_get_predicate(statement);
                e->setText(reinterpret_cast<const char *>(librdf_node_to_string(node)));

                e->adjust();
            }
        }
        librdf_stream_next(stream);
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
