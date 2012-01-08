#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H

#include <QtGui>
#include "graph.h"

class GraphView : public QGraphicsView
{
    Q_OBJECT
    
    public:
        explicit GraphView(QWidget *parent = 0);
    public slots:
        void openFile();
        void openURL();
        void saveFile() {
            graphs[currentGraph]->saveFile();
        }
        void saveFileAs() {
            graphs[currentGraph]->saveFileAs();
        }

    private:
        QList<Graph *> graphs;
        int currentGraph;
};

#endif
