#ifndef GRAPHICSLABEL_H
#define GRAPHICSLABEL_H

#include <QtGui>

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
    private:
        QTextLayout textLayout;
};


#endif 
