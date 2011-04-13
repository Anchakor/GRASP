#include "graphnode.h"
        
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
    QGraphicsLinearLayout *layout = new QGraphicsLinearLayout(Qt::Vertical); 
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    setLayout(layout);

    int framewidth = style()->pixelMetric(QStyle::PM_DefaultFrameWidth);
    setContentsMargins(framewidth,framewidth,framewidth,framewidth);
}

void GraphNode::setNode(const librdf_node *node) 
{ 
    node_ = librdf_new_node_from_node(const_cast<librdf_node *>(node));
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
    frameOptionV3.frameShape = QFrame::StyledPanel;
    frameOptionV3.lineWidth = 1;
    frameOptionV3.midLineWidth = 0;
    style()->drawPrimitive(QStyle::PE_Frame, &frameOptionV3, painter, widget);
}
