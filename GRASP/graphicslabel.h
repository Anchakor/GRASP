#ifndef GRAPHICSLABEL_H
#define GRAPHICSLABEL_H

#include <QtGui>
#include "rdf.h"

class GraphicsLabel : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphicsLabel(QGraphicsWidget *parent = 0);
        explicit GraphicsLabel(const QString &text, QGraphicsWidget *parent = 0);
        ~GraphicsLabel();

        void setText(const QString &text);
        QString text() const;

        void setFont(const QFont &font);
        QFont font() const;

        QRectF boundingRect() const;
        QRectF setupTextLayout(QTextLayout *layout);

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

        QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const;
        void setGeometry(const QRectF &rect);

        enum { Type =  UserType + 1 };
        int type() const;

    protected:
        /*virtual bool sceneEvent(QEvent *event) {
            printf("event %d\n", event->type());
            if(event->type() == QEvent::GraphicsSceneMouseMove) { 
                scene()->sendEvent(reinterpret_cast<QGraphicsItem *>(parent()), event);
                return false; }
            return QGraphicsWidget::sceneEvent(event);
        }*/

    private:
        QTextLayout textLayout;
};

class GraphicsNodeLabel : public GraphicsLabel
{
    Q_OBJECT

    public:
        explicit GraphicsNodeLabel(QGraphicsWidget *parent);
        explicit GraphicsNodeLabel(librdf_node *node, QGraphicsWidget *parent = 0);
        ~GraphicsNodeLabel();

        /// copy node and set it as rdf node of the graph node 
        void setNode(librdf_node *node);
        const librdf_node *node() const;

        void editDialog();

        librdf_node *node_;

    protected:
        virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);

    private:
        void init();
};


#endif 
