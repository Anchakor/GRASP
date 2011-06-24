#ifndef GRAPH_H
#define GRAPH_H

#include <QtGui>
#include "rdf.h"
#include "graphicslabel.h"
#include "graphnode.h"
#include "graphedge.h"

class Graph : public QGraphicsScene
{
    Q_OBJECT

    public:
        explicit Graph(QObject *parent = 0);
        explicit Graph(rdf::Node *context, QObject *parent = 0);
        ~Graph();

        void contextChanged();

    private:
        rdf::Node *context_;
        //QSet<librdf_node *> node_ids_;
        QHash<rdf::Node, GraphNode *> nodes_;
        QHash<rdf::Statement, GraphEdge *> edges_;
};

#endif
