#include "graphedge.h"
       
static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;

GraphEdge::GraphEdge(QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
}
        
GraphEdge::GraphEdge(librdf_statement *statement, QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
    setStatement(statement);
}

void GraphEdge::init()
{
    statement_ = NULL;
    sourceNode_ = NULL;
    destNode_ = NULL;
    arrowSize = 10;

    setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    setFocusPolicy(Qt::StrongFocus);
//    setFlag(ItemIsFocusable);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
}

void GraphEdge::setStatement(const librdf_statement *statement) 
{ 
    if(statement_ != NULL) librdf_free_statement(statement_);
    statement_ = librdf_new_statement_from_statement(const_cast<librdf_statement *>(statement));
}
        
const librdf_statement *GraphEdge::statement() const
{
    return statement_;
}

void GraphEdge::setText(const QString &text)
{
    QString tmp(text);
    //tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
    textLayout.setText(tmp);
    setupTextLayout(&textLayout);
    update();
}

QString GraphEdge::text() const
{
    return textLayout.text();
}

QRectF GraphEdge::setupTextLayout(QTextLayout *layout)
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
        
void GraphEdge::setSourceNode(const QGraphicsWidget *node)
{
    sourceNode_ = const_cast<QGraphicsWidget *>(node);
}
        
QGraphicsWidget *GraphEdge::sourceNode() const
{
    return sourceNode_;
}
        
void GraphEdge::setDestNode(const QGraphicsWidget *node)
{
    destNode_ = const_cast<QGraphicsWidget *>(node);
}
        
QGraphicsWidget *GraphEdge::destNode() const
{
    return destNode_;
}

void GraphEdge::adjust()
{
    if (!sourceNode_ || !destNode_) return;

    // line from center of sourceNode_ to center of destNode_
    sourceNode_->adjustSize();
    QSizeF sS = sourceNode_->size();
    QPointF sP = mapFromItem(sourceNode_, 0, 0);
    sP += QPointF(sS.width()/2, sS.height()/2);

    destNode_->adjustSize();
    QSizeF dS = destNode_->size();
    QPointF dP = mapFromItem(destNode_, 0, 0);
    dP += QPointF(dS.width()/2, dS.height()/2);
    
    QLineF line(sP, dP);
    QRectF label (textLayout.boundingRect());
    label.translate(QPointF((line.x1()+line.x2())/2, (line.y1()+line.y2())/2));
    labelRect_ = label;
    qreal length = line.length();

    prepareGeometryChange();
    
    // offsets
    if (length > qreal(20.)) {
        QPointF sourceEdgeOffset((line.dx() * (sS.width()/2)) / length, (line.dy() * (sS.height()/2)) / length);
        QPointF destEdgeOffset((line.dx() * (dS.width()/2)) / length, (line.dy() * (dS.height()/2)) / length);
        sourcePoint = line.p1() + sourceEdgeOffset;
        destPoint = line.p2() - destEdgeOffset;
    } else {
        sourcePoint = destPoint = line.p1();
    }
}

QRectF GraphEdge::boundingRect() const
{
    if (!sourceNode_ || !destNode_) return QRectF();

    qreal penWidth = 1;
    qreal extra = (penWidth + arrowSize) / 2.0;
    
    return labelRect_.united(QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
        .normalized()
        .adjusted(-extra, -extra, extra, extra));
}

QPainterPath GraphEdge::shape() const
{
    QPainterPath pp;
    pp.addRect(labelRect_);
    return arrow_.united(pp);
}

void GraphEdge::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)

    if (!sourceNode_ || !destNode_) return;

    QLineF line(sourcePoint, destPoint);
    if (qFuzzyCompare(line.length(), qreal(0.))) return;

    painter->setRenderHint(QPainter::Antialiasing);

    // Draw the line itself
    QColor c;
    if(hasFocus() || isSelected()) {
        c = palette().color(QPalette::Highlight);
        if(isSelected() && !hasFocus()) c = c.lighter();
    } else
        c = palette().color(QPalette::ButtonText);
    painter->setPen(QPen(c, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawLine(line);

    // Draw the arrows
    double angle = ::acos(line.dx() / line.length());
    if (line.dy() >= 0)
        angle = TwoPi - angle;

    QPointF destArrowP1 = destPoint + QPointF(sin(angle - Pi / 3) * arrowSize,
                                              cos(angle - Pi / 3) * arrowSize);
    QPointF destArrowP2 = destPoint + QPointF(sin(angle - Pi + Pi / 3) * arrowSize,
                                              cos(angle - Pi + Pi / 3) * arrowSize);
    QPolygonF polygon;
    polygon << line.p2() << destArrowP1 << destArrowP2;
    arrow_ = QPainterPath();
    arrow_.addPolygon(polygon);
    arrow_.closeSubpath();

    painter->setBrush(c);
    painter->drawPolygon(polygon);

    // Draw the label
    QColor col (palette().color(QPalette::Button));
    if(!hasFocus() && !isUnderMouse()) col.setAlphaF(0.7);
    painter->fillRect(labelRect_, col);
    painter->setPen(palette().color(QPalette::ButtonText));
    textLayout.draw(painter, labelRect_.topLeft()); 
}
        
void GraphEdge::focusInEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    setZValue(1);
    update();
}
        
void GraphEdge::focusOutEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    setZValue(-1);
    update();
}
        
void GraphEdge::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    setFocus();
}
        
void GraphEdge::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    clearFocus();
}

GraphEdge::~GraphEdge()
{
    if(statement_ != NULL) librdf_free_statement(statement_);
}
