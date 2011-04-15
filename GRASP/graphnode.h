#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <QtGui>
#include "rdf.h"

class GraphNode : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphNode(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        explicit GraphNode(librdf_node *node, QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        ~GraphNode();
       
        /// copy node and set it as rdf node of the graph node 
        void setNode(const librdf_node *node);
        const librdf_node *node() const;

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
        enum { Type = UserType + 1 };
        int type() const { return Type; }
     
    protected:   
        void focusInEvent(QFocusEvent *event)
        {
            Q_UNUSED(event)

            qDebug("NODEfocusIn");
            update();
        }
    private:
        void init();
        librdf_node *node_;
};

class GraphNodeObjectLayout : public QGraphicsLinearLayout
{

    public:
        GraphNodeObjectLayout(QGraphicsLayoutItem *parent = 0) : QGraphicsLinearLayout(Qt::Vertical, parent) {}
};

class GraphNodePropertyLayout : public QGraphicsLinearLayout
{

    public:
        GraphNodePropertyLayout(QGraphicsLayoutItem *parent = 0) : QGraphicsLinearLayout(parent) {}
};

#endif
