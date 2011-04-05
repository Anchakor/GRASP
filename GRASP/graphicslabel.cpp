#include "graphicslabel.h"

GraphicsLabel::GraphicsLabel(const QString &text, QGraphicsWidget *parent) : QObject(0), QGraphicsLayoutItem(0, false), QGraphicsSimpleTextItem(text, parent)
{
}

GraphicsLabel::~GraphicsLabel()
{
}

QSizeF GraphicsLabel::sizeHint(Qt::SizeHint which, const QSizeF &constraint) const
{
    qDebug("SIZEHINT\n");
    switch (which) {
        case Qt::MinimumSize:
            return QSizeF(0, 0);
        case Qt::PreferredSize:
            return boundingRect().size();
            //return document()->size();                                                                                            
        case Qt::MaximumSize:
            return QSizeF(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
        default:
            qWarning("GraphicsLabel::sizeHint(): Don't know how to handle the value of 'which'");
            break;      
    }
    return constraint;
}

void GraphicsLabel::setGeometry(const QRectF &rect)
{
    //setTextWidth(rect.width());
    setPos(rect.topLeft());
}
        
void GraphicsLabel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QGraphicsSimpleTextItem::paint(painter, option, widget);
    painter->drawRect(boundingRect());
}
