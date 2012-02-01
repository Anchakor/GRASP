#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H

#include <QtGui>
#include "graph.h"

class GraphView : public QGraphicsView
{
    Q_OBJECT

    public:
        explicit GraphView(QWidget *parent = 0);
        void addGraph(Graph *g);

    public slots:
        void openFile();
        void openURL();
        void saveFile() {
            graphs[currentGraph_]->saveFile();
        }
        void saveFileAs() {
            graphs[currentGraph_]->saveFileAs();
        }

    private:
        QList<Graph *> graphs;
        int currentGraph_;
};

#endif
