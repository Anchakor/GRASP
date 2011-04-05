#include "graph.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
}

Graph::Graph(librdf_node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
}
