#include "graph.h"
#include "graphicslabel.h"

Graph::Graph(QObject *parent) : QGraphicsScene(parent) 
{
    // test
    QGraphicsWidget *w = new QGraphicsWidget(0);
    w->setLayout(new QGraphicsLinearLayout(Qt::Vertical, w));
    addItem(w);
    new GraphicsLabel("tost", w);
    new GraphicsLabel("txxt2", w);
    w->setGeometry(10, 10, 100, 100);
    w->layout()->activate();
}

Graph::Graph(librdf_node *context, QObject *parent) : QGraphicsScene(parent), context_(context)
{
    //Graph(parent);
}
