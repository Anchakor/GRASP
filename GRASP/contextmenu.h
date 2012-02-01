#ifndef CONTEXTMENU_H
#define CONTEXTMENU_H

#include <QtGui>
#include "rdf.h"
#include "graph.h"

class ContextMenu : public QMenu
{
    Q_OBJECT

    public:
        explicit ContextMenu(Graph *g, QWidget *parent = 0);

        void addGeneralNodeActions(rdf::Node &node);
        void addGeneralEdgeActions(rdf::Statement &statement);
        void addGeneralGraphActions();

        Graph *graph_;
        rdf::Node node_;
        rdf::Statement statement_;

    public slots:
        // node actions
        void addRelation();
        void removeNode();

        // edge actions
        void removeRelation();

        // graph actions
        void addTriple();
};

#endif
