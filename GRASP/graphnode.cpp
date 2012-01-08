#include "graphnode.h"
#include "graphedge.h"
#include "graph.h"
#include "lens.h"
#include "aggreg.h"

GraphNode::GraphNode(QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
{
    init();
}

GraphNode::GraphNode(librdf_node *node, QGraphicsItem *parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) 
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
    Lens *lens = graph->lens_;

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    statement = librdf_new_statement_from_nodes(rdf::world, librdf_new_node_from_node(const_cast<librdf_node *>(subjNode->node())), NULL, NULL);
    stream = librdf_model_find_statements_in_context(rdf::model, statement, context);
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);
        if(!aggregStatements_.contains(streamstatement)) {
            librdf_statement *pattern = librdf_new_statement_from_nodes(rdf::world,
                                librdf_new_node_from_node(librdf_statement_get_subject(streamstatement)),
                                librdf_new_node_from_node(librdf_statement_get_predicate(streamstatement)),
                                NULL);

            rdf::Node n (librdf_statement_get_predicate(streamstatement));
            if(lens->aggregPropertyList_.contains(n)) {
                GraphAggregProperty *gap;
                bool found = false;
                for(int i = 0; i < aggregProps->count(); i++) {
                    if(aggregProps->itemAt(i) == subjNode) continue;
                    gap = reinterpret_cast<GraphAggregProperty *>(aggregProps->itemAt(i));
                    if(librdf_statement_equals(const_cast<librdf_statement *>(gap->statement()), pattern)) {
                        found = true; break;
                    }
                }
                if(!found) {
                    gap = new GraphAggregProperty();
                    aggregProps->addItem(gap);
                    gap->setStatement(pattern);
                }

                GraphAggregNode *aggNode = new GraphAggregNode();
                gap->objects()->addItem(aggNode);
                aggNode->setNode(librdf_statement_get_object(streamstatement));
                aggregStatements_.insert(streamstatement);
                // recursive call on next level aggregation
                genAggregLevel(aggNode->label(), aggNode);
            }
            librdf_free_statement(pattern);
        }
        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}

void GraphNode::updateGeometry()
{
    QGraphicsLayoutItem::updateGeometry();

    QSizeF oldsize = size();
    adjustSize();
    setPos(x() + (oldsize.width() - size().width()) / 2, y() + (oldsize.height() - size().height()) / 2);

    adjustEdges();
}

void GraphNode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->fillRect(option->rect, palette().color(QPalette::Button));

    QStyleOptionFrameV3 frameOptionV3;
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
    style()->drawPrimitive(QStyle::PE_Frame, &frameOptionV3, painter, widget);
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

void GraphNode::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsWidget::mouseMoveEvent(event);
    adjustEdges();
    Graph *graph = reinterpret_cast<Graph *>(scene());
    char *s = rdf::Node(const_cast<librdf_node *>(label_->node())).serialize();
    uint u = qHash(QByteArray(s));
    graph->loadedNodePositions_[u] = pos();
    free(s);
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

