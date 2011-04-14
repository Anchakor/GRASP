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

    setFlag(ItemIsSelectable);
    setFlag(ItemIsFocusable);
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

    return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
        .normalized()
        .adjusted(-extra, -extra, extra, extra);
}

void GraphEdge::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)

    if (!sourceNode_ || !destNode_) return;

    QLineF line(sourcePoint, destPoint);
    if (qFuzzyCompare(line.length(), qreal(0.))) return;

    // Draw the line itself
    painter->setPen(QPen(palette().color(QPalette::WindowText), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawLine(line);

    // Draw the arrows
    double angle = ::acos(line.dx() / line.length());
    if (line.dy() >= 0)
        angle = TwoPi - angle;

    QPointF destArrowP1 = destPoint + QPointF(sin(angle - Pi / 3) * arrowSize,
                                              cos(angle - Pi / 3) * arrowSize);
    QPointF destArrowP2 = destPoint + QPointF(sin(angle - Pi + Pi / 3) * arrowSize,
                                              cos(angle - Pi + Pi / 3) * arrowSize);

    painter->setBrush(palette().color(QPalette::WindowText));
    painter->drawPolygon(QPolygonF() << line.p2() << destArrowP1 << destArrowP2);
}

GraphEdge::~GraphEdge()
{
    if(statement_ != NULL) librdf_free_statement(statement_);
}
