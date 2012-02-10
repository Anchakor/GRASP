#include "graphnode.h"
#include "graphedge.h"
#include "graph.h"
#include "lens.h"
#include "aggreg.h"

GraphNode::GraphNode(QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
}

GraphNode::GraphNode(rdf::Node &node, QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
    setNode(node);
}

void GraphNode::init()
{
    hover_ = false;

    setFiltersChildEvents(true);
    setAcceptHoverEvents(true);
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    setCacheMode(DeviceCoordinateCache);
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    layout_ = new QGraphicsLinearLayout(Qt::Vertical, this); 
    layout_->setSpacing(0);
    layout_->setContentsMargins(0,0,0,0);
    layout_->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    setLayout(layout_);

    label_ = new GraphicsNodeLabel(this);
    layout_->addItem(label_);

    int framewidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    setContentsMargins(framewidth,framewidth,framewidth,framewidth);
}

void GraphNode::contextChanged()
{
    genAggregLevel(label_, layout_);
}

void GraphNode::genAggregLevel(GraphicsNodeLabel *subjNode, QGraphicsLinearLayout *aggregProps)
{
    for(int i = 0; i < aggregProps->count(); i++) {
        if(aggregProps->itemAt(i) != subjNode) aggregProps->removeAt(i);
    }

    Graph *graph = reinterpret_cast<Graph *>(scene());
    rdf::Node context (graph->getContext());
    Lens *lens = &(graph->lens_);

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    statement = librdf_new_statement_from_nodes(rdf::world, librdf_new_node_from_node(subjNode->node()), NULL, NULL);
    stream = librdf_model_find_statements_in_context(rdf::model, statement, context);
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);
        if(!aggregStatements_.contains(streamstatement)) {
            rdf::Node n (librdf_statement_get_predicate(streamstatement));
            if(lens->aggregPropertyList_.contains(n)) {
                GraphAggregProperty *gap;
                gap = new GraphAggregProperty();
                aggregProps->addItem(gap);
                rdf::Statement sstat (streamstatement);
                gap->setStatement(sstat);

                GraphAggregNode *aggNode = new GraphAggregNode();
                gap->objects()->addItem(aggNode);
                rdf::Node nobj (librdf_statement_get_object(streamstatement));
                aggNode->setNode(nobj);
                aggregStatements_.insert(streamstatement);
                // recursive call on next level aggregation
                genAggregLevel(aggNode->label(), aggNode);
            }
        }
        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}

void GraphNode::updateGeometry()
{
    QGraphicsLayoutItem::updateGeometry();

    Graph *graph = reinterpret_cast<Graph *>(scene());
    if(graph && graph->views().size() > 0) {
        QSizeF oldsize = size();
        adjustSize();
        setPos(x() + (oldsize.width() - size().width()) / 2, y() + (oldsize.height() - size().height()) / 2);
    }

    adjustEdges();
}

void GraphNode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);
    painter->fillRect(option->rect, palette().color(QPalette::Button));

    QPen p;
    if(isSelected())
        p.setColor(palette().color(QPalette::Highlight));
    else
        p.setColor(palette().color(QPalette::Dark));
    p.setWidth(1);
    painter->setPen(p);
    painter->drawRect(option->rect);

    /*QStyleOptionFrameV3 frameOptionV3;
    frameOptionV3.direction     = option->direction;
    frameOptionV3.fontMetrics   = option->fontMetrics;
    frameOptionV3.palette       = option->palette;
    frameOptionV3.rect          = option->rect;
    frameOptionV3.state         = option->state;
    if(hasFocus() || isSelected())
        frameOptionV3.state |= QStyle::State_Sunken;
    else
        frameOptionV3.state |= QStyle::State_None;
    frameOptionV3.frameShape = QFrame::StyledPanel;
    frameOptionV3.lineWidth = 1;
    frameOptionV3.midLineWidth = 0;
    style()->drawPrimitive(QStyle::PE_Frame, &frameOptionV3, painter, widget);*/
}

void GraphNode::registerEdge(GraphEdge *edge, bool in)
{
    if(in)
        inEdges_.insert(edge);
    else
        outEdges_.insert(edge);
}

bool GraphNode::unregisterEdge(GraphEdge *edge)
{
    return (inEdges_.remove(edge) || outEdges_.remove(edge));
}

const QSet<GraphEdge *> *GraphNode::outEdges() const
{
    return &outEdges_;
}

const QSet<GraphEdge *> *GraphNode::inEdges() const
{
    return &inEdges_;
}

void GraphNode::adjustEdges() {
    // adjust connected edges
    QSetIterator<GraphEdge *> i(inEdges_);
    while (i.hasNext())
        i.next()->updateGeometry();
    QSetIterator<GraphEdge *> i2(outEdges_);
    while (i2.hasNext())
        i2.next()->updateGeometry();
}

/*bool GraphNode::eventFilter(QObject *obj, QEvent *event)*/
bool GraphNode::sceneEventFilter(QGraphicsItem *watched, QEvent *event)
{
    // all mouse move events of children are to be sorted out by GraphNode
    if(event->type() == QEvent::GraphicsSceneMouseMove) { 
        scene()->sendEvent(this, event);
        return true; }

    return QGraphicsItem::sceneEventFilter(watched, event);
}

void GraphNode::moveEvent(QGraphicsSceneMoveEvent *event)
{
    QGraphicsWidget::moveEvent(event);
    adjustEdges();
    Graph *graph = reinterpret_cast<Graph *>(scene());
    if(graph && graph->views().size() > 0) {
        uint u = qHash(label_->node());
        graph->loadedNodePositions_[u] = event->newPos();
    }
}

void GraphNode::focusInEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    //QGraphicsWidget::focusInEvent(event);
    update();
}

void GraphNode::focusOutEvent(QFocusEvent *event)
{
    Q_UNUSED(event)

    //QGraphicsWidget::focusOutEvent(event);
    update();
}

void GraphNode::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    hover_ = true;
    //QGraphicsWidget::hoverEnterEvent(event);
    update();
}

void GraphNode::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    Q_UNUSED(event)

    hover_ = false;
    //QGraphicsWidget::hoverLeaveEvent(event);
    update();
}

GraphNode::~GraphNode()
{
}

