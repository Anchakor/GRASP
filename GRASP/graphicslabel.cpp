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
    QString tmp(text);
    //tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
    textLayout.setText(tmp);
    setupTextLayout(&textLayout);
    update();
}

QString GraphicsLabel::text() const
{
    return textLayout.text();
}

void GraphicsLabel::setFont(const QFont &font)
{
    textLayout.setFont(font);
}

QFont GraphicsLabel::font() const
{
    return textLayout.font();
}

QRectF GraphicsLabel::boundingRect() const
{
    return textLayout.boundingRect();
}

QRectF GraphicsLabel::setupTextLayout(QTextLayout *layout)
{
    layout->setCacheEnabled(true);
    layout->beginLayout();
    while (layout->createLine().isValid());
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

void GraphicsLabel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);
    Q_UNUSED(option);
    
/*    QTextLayout::FormatRange range;
    range.start = 0;
    range.length = textLayout.text().length();
    QList<QTextLayout::FormatRange> formats;
    formats.append(range);
    textLayout.setAdditionalFormats(formats);*/

    textLayout.draw(painter, QPointF(0, 0)); 
}

int GraphicsLabel::type() const
{
    return Type;
}

QSizeF GraphicsLabel::sizeHint(Qt::SizeHint which, const QSizeF &constraint) const
{
    switch (which) {
        case Qt::MinimumSize:
            return boundingRect().size();
        case Qt::PreferredSize:
            return boundingRect().size();
        case Qt::MaximumSize:
            return boundingRect().size();
        default:
            qWarning("GraphicsLabel::sizeHint(): Don't know how to handle the value of 'which'");
            break;      
    }
    return constraint;
}

void GraphicsLabel::setGeometry(const QRectF &rect)
{
    setPos(rect.topLeft());
}


