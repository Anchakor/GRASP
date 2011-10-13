#include "graphnode.h"
#include "graphedge.h"
        
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
    node_ = NULL;
    hover_ = false;
    
    setAcceptHoverEvents(true);
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    setCacheMode(DeviceCoordinateCache);

    QGraphicsLinearLayout *layout = new QGraphicsLinearLayout(Qt::Vertical); 
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    setLayout(layout);
    
    layout->addItem(&label_);

    int framewidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    setContentsMargins(framewidth,framewidth,framewidth,framewidth);
}

void GraphNode::setNode(const librdf_node *node) 
{ 
    if(node_ != NULL) librdf_free_node(node_);
    node_ = librdf_new_node_from_node(const_cast<librdf_node *>(node));
   
   	char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node_, NULL, NULL));
    label_.setText(str);
	free(str);
}
        
const librdf_node *GraphNode::node() const
{
    return node_;
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
        
void GraphNode::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsWidget::mouseMoveEvent(event);

    // adjust connected edges
    QSetIterator<GraphEdge *> i(inEdges_);
    while (i.hasNext())
        i.next()->adjust();
    QSetIterator<GraphEdge *> i2(outEdges_);
    while (i2.hasNext())
        i2.next()->adjust();
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
    //if(node_ != NULL) librdf_free_node(node_);
}

