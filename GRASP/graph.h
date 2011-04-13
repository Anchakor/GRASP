#ifndef GRAPH_H
#define GRAPH_H

#include <QtGui>
#include "rdf.h"
#include "graphicslabel.h"
#include "graphnode.h"

class Graph : public QGraphicsScene
{
    Q_OBJECT

    public:
        explicit Graph(QObject *parent = 0);
        explicit Graph(librdf_node *context, QObject *parent = 0);

        void contextChanged();

    private:
        librdf_node *context_;
        QSet<librdf_node *> node_ids_;
        QHash<librdf_node *, GraphNode *> nodes_;
};

#endif
