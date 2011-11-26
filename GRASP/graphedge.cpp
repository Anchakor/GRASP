#include "graphedge.h"
#include "graphnode.h"
#include "graph.h"
#include "graphutils.h"
#include "guiutils.h"
       
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
    hover_ = false;

    setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
}

void GraphEdge::setStatement(const librdf_statement *statement) 
{ 
    if(statement_ != NULL) librdf_free_statement(statement_);
    statement_ = librdf_new_statement_from_statement(const_cast<librdf_statement *>(statement));
    
    librdf_node *node = librdf_statement_get_predicate(statement_);
    char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node, (reinterpret_cast<Graph *>(scene()))->nstack_, NULL));
    setText(QString::fromLocal8Bit(const_cast<const char *>(str)));
    free(str);
}
        
const librdf_statement *GraphEdge::statement() const
{
    return statement_;
}

void GraphEdge::setText(const QString &text)
{
    //QString tmp(text);
    //tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
    textLayout.setText(text);
    setupTextLayout(&textLayout);
    adjust();
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

void GraphEdge::adjust()
{
    if (!sourceNode_ || !destNode_) return;

    sourceNode_->adjustSize();
    destNode_->adjustSize();

    QRectF sSBR (sourceNode_->sceneBoundingRect());
    QRectF dSBR (destNode_->sceneBoundingRect());

    // line from center of sourceNode_ to center of destNode_
    QPointF sP (sSBR.center());
    QPointF dP (dSBR.center());
    
    QLineF line(sP, dP);
    QRectF label (textLayout.boundingRect());
    label.translate(line.pointAt(0.5));
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
    update();
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
    if(hasFocus() || hover_ || isSelected()) {
        c = palette().color(QPalette::Highlight);
        if(isSelected() && !hasFocus() && !hover_) c = c.lighter();
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
    if(!hasFocus() && !hover_) col.setAlphaF(0.7);
    painter->fillRect(labelRect_, col);
    painter->setPen(palette().color(QPalette::ButtonText));
    textLayout.draw(painter, labelRect_.topLeft()); 
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
        
void GraphEdge::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)

    librdf_node *node = librdf_statement_get_predicate(statement_);
    librdf_node *newnode = NULL;
    RDFNodeEditDialog dialog (&newnode, node, reinterpret_cast<Graph *>(scene()), true);

    if(dialog.exec() && newnode) {
        rdf::Statement stat (statement_);
        librdf_statement_set_predicate(stat, newnode);
        try {
            addOrReplaceStatement(reinterpret_cast<Graph *>(scene())->getContext(), stat, statement_);
        } catch (std::exception& e) {
            QString msg ("Error editing the node, probably illegal node form in this position");
            msg.append("'\n Error: ").append(QString(typeid(e).name()));
            alertPopup(msg);
            return;
        }
        setStatement(const_cast<const librdf_statement *>(static_cast<librdf_statement *>(stat)));
        //librdf_free_statement(stat); TODO uncomment this when redland 1.0.15 comes out
    }
}

GraphEdge::~GraphEdge()
{
    //if(statement_ != NULL) librdf_free_statement(statement_);
}
