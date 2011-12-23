#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <QtGui>
#include "rdf.h"
#include "graphicslabel.h"

class GraphNode;

class GraphEdge : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphEdge(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        explicit GraphEdge(librdf_statement *statement, QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        ~GraphEdge();

        void setStatement(librdf_statement *statement) {
            label_->setStatement(statement);
        }
        const librdf_statement *statement() const {
            return label_->statement();
        }

        void setSourceNode(GraphNode *node);
        GraphNode *sourceNode() const;
        void setDestNode(GraphNode *node);
        GraphNode *destNode() const;

        virtual void updateGeometry();
        QRectF boundingRect() const;
        QPainterPath shape() const;

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
        enum { Type = UserType + 2 };
        int type() const { return Type; }

    protected:
        virtual void focusInEvent(QFocusEvent *event);
        virtual void focusOutEvent(QFocusEvent *event);
        virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

    private:
        void init();
        QRectF labelRect_;
        GraphicsPropertyLabel *label_;
        bool hover_;

        QPainterPath arrow_;

        GraphNode *sourceNode_;
        GraphNode *destNode_;
        QPointF sourcePoint;
        QPointF destPoint;
        qreal arrowSize;
};

#endif
