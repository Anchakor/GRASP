#include "aggreg.h"

GraphAggregNode::GraphAggregNode(QGraphicsLayoutItem *parent) : QGraphicsLinearLayout(Qt::Vertical, parent)
{
    setSpacing(0);
    setContentsMargins(0,0,0,0);
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    label_ = new GraphicsNodeLabel();
    addItem(label_);
}

GraphAggregNode::~GraphAggregNode()
{
    /*delete label_; TODO: necessary? */
}

GraphAggregProperty::GraphAggregProperty(QGraphicsLayoutItem *parent) : QGraphicsLinearLayout(Qt::Horizontal, parent)
{
    setSpacing(0);
    setContentsMargins(0,0,0,0);
    setSpacing(6);
    //setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    l_ = new GraphicsLabel();
    l_->setText(" ");
    addItem(l_);
    label_ = new GraphicsPropertyLabel();
    addItem(label_);
    objects_ = new QGraphicsLinearLayout(Qt::Vertical);
    addItem(objects_);
}

GraphAggregProperty::~GraphAggregProperty()
{
    /*delete l_; TODO: necessary?
    delete label_;
    delete objects_;*/
}
