#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <QtGui>
#include "rdf.h"
#include "graphedge.h"
#include "graphicslabel.h"

class GraphNode : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphNode(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        explicit GraphNode(librdf_node *node, QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        ~GraphNode();
       
        /// copy node and set it as rdf node of the graph node 
        void setNode(librdf_node *node);
        //const librdf_node *node() const;

        //void editDialog();

        virtual void updateGeometry();
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
        enum { Type = UserType + 1 };
        int type() const { return Type; }

        void registerEdge(GraphEdge *edge, bool in = true);
        bool unregisterEdge(GraphEdge *edge);
        const QSet<GraphEdge *> *outEdges() const;
        const QSet<GraphEdge *> *inEdges() const;
        bool operator==(const GraphNode &other) const {
            return librdf_node_equals(node_, other.node_);      
        }
        void adjustEdges();
     
    protected:
        bool eventFilter(QObject *obj, QEvent *event);
        virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        virtual void focusInEvent(QFocusEvent *event);
        virtual void focusOutEvent(QFocusEvent *event);
        virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
        //virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);

    private:
        void init();
        QGraphicsLinearLayout *layout_;
        librdf_node *node_;
        QSet<GraphEdge *> outEdges_;
        QSet<GraphEdge *> inEdges_;
        bool hover_;
        GraphicsNodeLabel *label_;
};

#endif
