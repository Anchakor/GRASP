#include "graph.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent), context_(rdf::world)
{
}

Graph::Graph(rdf::Node &context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    contextChanged();
}

Graph::Graph(rdf::Node &context, raptor_namespace_stack *nstack, QObject *parent) : QGraphicsScene(parent), nstack_(nstack), context_(context)
{
    contextChanged();
}

Graph::Graph(rdf::Node &context, QString &file, QObject *parent) : QGraphicsScene(parent), file_(file), context_(context)
{
    contextChanged();
}

Graph::Graph(rdf::Node &context, QString &file, raptor_namespace_stack *nstack, QObject *parent) : QGraphicsScene(parent), nstack_(nstack), file_(file), context_(context)
{
    printf("nstack: %p\n", nstack_);
    nstack_ = nstack;
    printf("nstack2: %p\n", nstack_);
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

        if(true) { // triple/property not blacklisted TODO
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
            }
                rdf::Node nodex (librdf_statement_get_predicate(statement));
                //printf("DEBUG pred node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(nodex)));
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
                char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node, nstack_, NULL));
                e->setText(const_cast<const char *>(str));
                free(str);

                addItem(e);
                e->adjust();
            }
        }
        if(librdf_stream_next(stream)) break;
    }

    librdf_free_stream(stream);
}

rdf::Node Graph::getContext() 
{
    return rdf::Node(context_);
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
    /*QList<GraphNode *> nl = nodes_.values();
    for (int i = 0; i < nl.size(); ++i) {
        delete nl.at(i);
    }
    QList<GraphEdge *> el = edges_.values();
    for (int i = 0; i < el.size(); ++i) {
        delete el.at(i);
    }*/
}
