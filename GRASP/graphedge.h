#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <QtGui>
#include "rdf.h"
#include "graphnode.h"

class GraphEdge : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphEdge(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        explicit GraphEdge(librdf_statement *statement, QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        ~GraphEdge();
       
        /// copy statement and set it as rdf statement of the graph edge 
        void setStatement(const librdf_statement *statement);
        const librdf_statement *statement() const;
        void setText(const QString &text);
        QString text() const;
        QRectF setupTextLayout(QTextLayout *layout);

        void setSourceNode(const QGraphicsWidget *node);
        QGraphicsWidget *sourceNode() const;
        void setDestNode(const QGraphicsWidget *node);
        QGraphicsWidget *destNode() const;

        void adjust();
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
        librdf_statement *statement_;
        QTextLayout textLayout;
        QRectF labelRect_;

        QPainterPath arrow_;

        QGraphicsWidget *sourceNode_;
        QGraphicsWidget *destNode_;
        QPointF sourcePoint;
        QPointF destPoint;
        qreal arrowSize;
};

#endif
