#ifndef GRAPHICSLABEL_H
#define GRAPHICSLABEL_H

#include <QtGui>


//class QGraphicsSimpleTextItemPrivate;
class GraphicsLabel : public QGraphicsWidget
{
    Q_OBJECT

    public:
        GraphicsLabel(QGraphicsWidget *parent = 0);
        GraphicsLabel(const QString &text, QGraphicsWidget *parent = 0);
        ~GraphicsLabel();

        void setText(const QString &text);
        QString text() const;

        void setFont(const QFont &font);
        QFont font() const;

        QRectF boundingRect() const;
        bool contains(const QPointF &point) const;

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

        QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const;
        void setGeometry(const QRectF &rect);
/*        bool isObscuredBy(const QGraphicsItem *item) const;
        QPainterPath opaqueArea() const;
*/
        enum { Type =  UserType + 1 };
        int type() const;
    private:
        QString text_;
        QFont font_;
        QRectF boundingRect_;

        void updateBoundingRect();
        static QRectF setupTextLayout(QTextLayout *layout);
};


/* ojirio
class GraphicsLabel : public QObject, public QGraphicsLayoutItem, public QGraphicsSimpleTextItem {
    Q_OBJECT
    Q_INTERFACES(QGraphicsLayoutItem)

    public:
        enum { Type = UserType + 1 };
        
        GraphicsLabel(const QString &text = QString(), QGraphicsWidget *parent = 0);
        ~GraphicsLabel();

        int type() const { return Type; }
        QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const;
        void setGeometry(const QRectF &rect);
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};
*/

#endif 
