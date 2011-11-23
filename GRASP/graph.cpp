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
    nstack_ = nstack;
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
                addItem(e);
                e->setStatement(
                        edges_.insert(rdf::Statement(statement), e)
                            .key());

                //if(nodes_.value(reinterpret_cast<const char *>(librdf_node_to_string(node)) == 0) throw AddEdgeNodeNotFoundException();
                if(!nodes_.contains(x)) throw AddEdgeNodeNotFoundException();
                e->setSourceNode(nodes_.value(x));
                if(!nodes_.contains(y)) throw AddEdgeNodeNotFoundException();
                e->setDestNode(nodes_.value(y));

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

void Graph::setupNodeEditDialog(Ui::NodeEditDialog *ui, Graph *graph, librdf_node *node) {
    ui->tabWidget->setCurrentIndex(librdf_node_get_type(node) - 1);
    if(librdf_node_is_resource(node)) {
        char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node, graph->nstack_, NULL));
        ui->uriedit->setText(QString::fromLocal8Bit(str));
        free(str);
    } else if(librdf_node_is_literal(node)) {
        ui->valueedit->setPlainText(QString::fromLocal8Bit(reinterpret_cast<char *>(librdf_node_get_literal_value(node))));
        librdf_uri* uri = librdf_node_get_literal_value_datatype_uri(node);
        if(NULL != uri) {
            char *str = reinterpret_cast<char *>(raptor_uri_to_turtle_string(rdf::raptor, uri, graph->nstack_, NULL));
            ui->datatypeedit->setText(QString::fromLocal8Bit(str));
            free(str);
        }
        ui->languageedit->setText(const_cast<const char *>(librdf_node_get_literal_value_language(node)));
    } else if(librdf_node_is_blank(node)) {
        char *str = reinterpret_cast<char *>(librdf_node_get_blank_identifier(node));
        ui->bnodelabeledit->setText(QString::fromLocal8Bit(str));
        free(str);
    }
}
