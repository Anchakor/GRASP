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

        virtual bool contains (const QPointF & point) const {
            return QGraphicsItem::contains(point);
        }

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

    private:
        QTextLayout textLayout;
};

class GraphicsNodeLabel : public GraphicsLabel
{
    Q_OBJECT

    public:
        explicit GraphicsNodeLabel(QGraphicsWidget *parent = 0);
        explicit GraphicsNodeLabel(librdf_node *node, QGraphicsWidget *parent = 0);
        ~GraphicsNodeLabel();

        /// copy node and set it as rdf node of the label
        void setNode(librdf_node *node);
        const librdf_node *node() const;

        void editDialog();

        librdf_node *node_;

    protected:
        /*virtual bool sceneEvent(QEvent *event)
        {
            printf("node event %d\n", event->type());
            return QGraphicsItem::sceneEvent(event);
        }*/
        virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
        virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);

    private:
        void init();
};

class GraphicsPropertyLabel : public GraphicsLabel
{
    Q_OBJECT

    public:
        explicit GraphicsPropertyLabel(QGraphicsWidget *parent = 0);
        explicit GraphicsPropertyLabel(librdf_statement *statement, QGraphicsWidget *parent = 0);
        ~GraphicsPropertyLabel();

        /// copy statement and set it as rdf statement of the label
        void setStatement(librdf_statement *statement);
        const librdf_statement *statement() const;

        void editDialog();

        librdf_statement *statement_;

    protected:
        virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
        virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);

    private:
        void init();
};


#endif 
