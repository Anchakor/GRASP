#include "graphicslabel.h"

GraphicsLabel::GraphicsLabel(QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
}

GraphicsLabel::GraphicsLabel(const QString &text, QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
    setText(text);
}

GraphicsLabel::~GraphicsLabel()
{
}

void GraphicsLabel::setText(const QString &text)
{
    text_ = text;
    //updateBoundingRect();
    update();
}

QString GraphicsLabel::text() const
{
    return text_;
}

void GraphicsLabel::setFont(const QFont &font)
{
    font_ = font;
    //updateBoundingRect();
}

QFont GraphicsLabel::font() const
{
    return font_;
}

QRectF GraphicsLabel::boundingRect() const
{

    return boundingRect_;
}

bool GraphicsLabel::contains(const QPointF &point) const
{
    return boundingRect_.contains(point);
}

void GraphicsLabel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);
    
    QString tmp = text_;
    tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
    QTextLayout layout(tmp);
    layout.setFont(font_);
    //setupTextLayout(&layout);

    QTextLayout::FormatRange range;
    range.start = 0;
    range.length = layout.text().length();
    QList<QTextLayout::FormatRange> formats;
    formats.append(range);
    layout.setAdditionalFormats(formats);

    layout.draw(painter, QPointF(0, 0)); 
}

int GraphicsLabel::type() const
{
    return Type;
}

/*QRectF GraphicsLabel::setupTextLayout(QTextLayout *layout)
{
    layout->setCacheEnabled(true);
    layout->beginLayout();
    while (layout->createLine().isValid())
        ;
    layout->endLayout();
    qreal maxWidth = 0;
    qreal y = 0;
    for (int i = 0; i < layout->lineCount(); ++i) {
        QTextLine line = layout->lineAt(i);
        maxWidth = qMax(maxWidth, line.naturalTextWidth());
        line.setPosition(QPointF(0, y));
        y += line.height();
    }
    return QRectF(0, 0, maxWidth, y);
}

void GraphicsLabel::updateBoundingRect()
{
    
    QRectF br;
    if (text_.isEmpty()) {
        br = QRectF();
    } else {
        QString tmp = text_;
        tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
        //QStackTextEngine engine(tmp, font_);
        //QTextLayout layout(&engine);
        QTextLayout layout(tmp);
        br = setupTextLayout(&layout);
    }
    if (br != boundingRect_) {
        prepareGeometryChange();
        boundingRect_ = br;
        update();
    }
}*/




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

/* ojirio
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
        
void GraphicsLabel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QGraphicsWidget *widget)
{
    QGraphicsSimpleTextItem::paint(painter, option, widget);
    painter->drawRect(boundingRect());
}
*/
