#include "graphedge.h"
#include "graphnode.h"
#include "graph.h"

static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;

GraphEdge::GraphEdge(QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
}

GraphEdge::GraphEdge(rdf::Statement &statement, QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
    setStatement(statement);
}

void GraphEdge::init()
{
    sourceNode_ = NULL;
    destNode_ = NULL;
    arrowSize = 10;
    hover_ = false;

    label_ = new GraphicsPropertyLabel(this);

    setFiltersChildEvents(true);
    setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    //setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
}

void GraphEdge::setSourceNode(GraphNode *node)
{
    if(sourceNode_ != NULL) sourceNode_->unregisterEdge(this);
    sourceNode_ = node;
    sourceNode_->registerEdge(this, false);
}

GraphNode *GraphEdge::sourceNode() const
{
    return sourceNode_;
}

void GraphEdge::setDestNode(GraphNode *node)
{
    if(destNode_ != NULL) destNode_->unregisterEdge(this);
    destNode_ = node;
    destNode_->registerEdge(this);
}

GraphNode *GraphEdge::destNode() const
{
    return destNode_;
}

//void GraphEdge::adjust()
void GraphEdge::updateGeometry()
{
    if (!sourceNode_ || !destNode_) return;

    //sourceNode_->adjustSize();
    //destNode_->adjustSize();

    // line from center of sourceNode_ to center of destNode_
    QRectF sSBR (sourceNode_->sceneBoundingRect());
    QRectF dSBR (destNode_->sceneBoundingRect());
    QPointF sP (sSBR.center());
    QPointF dP (dSBR.center());
    QLineF line(sP, dP);

    // set label centered in the middle of the arrow
    QRectF label (label_->boundingRect());
    label.translate(line.pointAt(0.5));
    label.translate(-label.width()/2, -label.height()/2);

    // avoid overlapping
    bool overlapped;
    while(true) {
        overlapped = false;
        Graph *graph = reinterpret_cast<Graph *>(scene());
        if(!graph) break;
        Edges::const_iterator i = graph->edges_.constBegin();
        while (i != graph->edges_.constEnd()) {
            GraphEdge *e = i.value();
            if(e != this && e->label()->geometry().intersects(label)) {
                label.moveTo(label.x(), label.y() + 1 + e->label()->geometry().intersected(label).height());
                overlapped = true;
            }
            ++i;
        }
        // node overlapping
        Nodes::const_iterator j = graph->nodes_.constBegin();
        while (j != graph->nodes_.constEnd()) {
            GraphNode *n = j.value();
            if(n->geometry().intersects(label)) {
                label.moveTo(label.x(), label.y() + 1 + n->geometry().intersected(label).height());
                overlapped = true;
            }
            ++j;
        }

        if(!overlapped) break;
    };

    label_->setGeometry(label);
    labelRect_ = label;

    prepareGeometryChange();

    // set the source and destination points
    if(!sSBR.intersects(dSBR)) {
        QPointF po;
        if(QLineF::BoundedIntersection == line.intersect(QLineF(sSBR.topLeft(), sSBR.topRight()), &po)) sourcePoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(sSBR.bottomRight(), sSBR.topRight()), &po)) sourcePoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(sSBR.bottomLeft(), sSBR.bottomRight()), &po)) sourcePoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(sSBR.topLeft(), sSBR.bottomLeft()), &po)) sourcePoint = po;
        if(QLineF::BoundedIntersection == line.intersect(QLineF(dSBR.topLeft(), dSBR.topRight()), &po)) destPoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(dSBR.bottomRight(), dSBR.topRight()), &po)) destPoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(dSBR.bottomLeft(), dSBR.bottomRight()), &po)) destPoint = po;
        else if(QLineF::BoundedIntersection == line.intersect(QLineF(dSBR.topLeft(), dSBR.bottomLeft()), &po)) destPoint = po;
    } else {
        sourcePoint = destPoint = line.p1();
    }
    QGraphicsLayoutItem::updateGeometry();
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

    painter->setRenderHint(QPainter::Antialiasing);

    if (!qFuzzyCompare(line.length(), qreal(0.))) {
        // Draw the line itself
        QColor c;
        if(hasFocus() || label_->hasFocus() || hover_) {
            c = palette().color(QPalette::Highlight);
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
    }

    // Draw the label background
    QColor col (palette().color(QPalette::Button));
    if(!hasFocus()) col.setAlphaF(0.7);
    painter->fillRect(labelRect_, col);
    painter->setPen(palette().color(QPalette::ButtonText));
}

bool GraphEdge::sceneEvent(QEvent *event)
{
    if(event->type() == QEvent::FocusIn) {
        scene()->setFocusItem(label_);
        return true;
    }
    //printf("ev %d\n", event->type());
    if(event->type() == QEvent::GraphicsSceneContextMenu
            || event->type() == QEvent::GraphicsSceneMouseDoubleClick) {
        scene()->sendEvent(label_, event);
        return true;
    }
    QGraphicsWidget::sceneEvent(event);
}

/*bool GraphEdge::eventFilter(QObject *obj, QEvent *event)*/
bool GraphEdge::sceneEventFilter(QGraphicsItem *watched, QEvent *event)
{
    //printf("evFil %d\n", event->type());
    if(event->type() == QEvent::FocusIn
            || event->type() == QEvent::FocusOut) {
        scene()->sendEvent(this, event);
        return true;
    }

    return QGraphicsItem::sceneEventFilter(watched, event);
}

void GraphEdge::focusInEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    //QGraphicsWidget::focusInEvent(event);
    setZValue(1);
    update();
}

void GraphEdge::focusOutEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    //QGraphicsWidget::focusOutEvent(event);
    setZValue(-1);
    update();
}

void GraphEdge::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    hover_ = true;
    //QGraphicsWidget::hoverEnterEvent(event);
    setZValue(1);
    update();
}

void GraphEdge::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    hover_ = false;
    //QGraphicsWidget::hoverLeaveEvent(event);
    setZValue(-1);
    update();
}

GraphEdge::~GraphEdge()
{
}
