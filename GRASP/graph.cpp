#include "graph.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
}

Graph::Graph(librdf_node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
}

void Graph::contextChanged()
{
    librdf_stream *stream = librdf_model_context_as_stream(rdf::model, context_);
    if(NULL == stream) throw rdf::StreamConstructException();

    while(!librdf_stream_end(stream)) {
        librdf_statement *statement = librdf_stream_get_object(stream);
        if(NULL == statement) throw rdf::StatementConstructException();


//        if(!node_ids_.contains( ... )) {

//        }

        librdf_stream_next(stream);
    }

    librdf_free_stream(stream);
}

