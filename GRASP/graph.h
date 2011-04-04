#ifndef GRAPH_H
#define GRAPH_H

#include <QtGui>
#include "rdf.h"

class Graph : public QGraphicsScene
{
    Q_OBJECT

    public:
        Graph(QObject *parent = 0) : QGraphicsScene(parent) {}
        Graph(librdf_node *context, QObject *parent = 0);


};

#endif
