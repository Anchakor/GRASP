#ifndef GRAPHICSLABEL_H
#define GRAPHICSLABEL_H

#include <QtGui>

class GraphicsLabel : public QObject, public QGraphicsSimpleTextItem, public QGraphicsLayoutItem {
    Q_OBJECT

    public:
        enum { Type = UserType + 1 };
        
        GraphicsLabel(const QString &text = QString(), QGraphicsItem *parent = 0);
        ~GraphicsLabel();

        int type() const { return Type; }
        QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const;
        void setGeometry(const QRectF &rect);
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};


#endif 
