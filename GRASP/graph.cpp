#include "graph.h"
#include "graphicslabel.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
    addItem(new GraphicsLabel("test", 0));
}

Graph::Graph(librdf_node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    // test
    addItem(new GraphicsLabel("test", 0));
}
