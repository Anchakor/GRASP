#ifndef GRAPHICSLABEL_H
#define GRAPHICSLABEL_H

#include <QtGui>

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


#endif 
