#ifndef GRAPH_H
#define GRAPH_H

#include <QtGui>
#include "rdf.h"

class Graph : public QGraphicsScene
{
    Q_OBJECT

    public:
        Graph(QObject *parent = 0);
        Graph(librdf_node *context, QObject *parent = 0);

    private:
        librdf_node *context_;
};

#endif
