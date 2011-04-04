#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H

#include <QtGui>

class GraphView : public QGraphicsView
{
    Q_OBJECT
    
    public:
        explicit GraphView(QWidget *parent = 0) : QGraphicsView(parent) {}
    public slots:
        void openFile();
        void openURL();
};

#endif
