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
        Graph *currentGraph() const;

    signals:
        void graphChanged();

    public slots:
        void openFile();
        void openURL();
        void saveFile() {
            graphs[currentGraph_]->saveFile();
        }
        void saveFileAs() {
            graphs[currentGraph_]->saveFileAs();
        }
        void newGraph();
        void findDialog();
        void zoom(int i);

    private:
        QList<Graph *> graphs;
        int currentGraph_;
        qreal pastScale;
};

#endif
