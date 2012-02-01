#ifndef AGGREG_H
#define AGGREG_H

#include <QtGui>
#include "rdf.h"
#include "graphicslabel.h"

class GraphAggregNode : public QGraphicsLinearLayout
{
    public:
        GraphAggregNode(QGraphicsLayoutItem *parent = 0);
        ~GraphAggregNode();
        void setNode(rdf::Node &node) {
            label_->setNode(node);
        }
        rdf::Node node() const {
            return label_->node();
        }
        GraphicsNodeLabel *label() {
            return label_;
        }

    private:
        GraphicsNodeLabel *label_;
};

class GraphAggregProperty : public QGraphicsLinearLayout
{
    public:
        GraphAggregProperty(QGraphicsLayoutItem *parent = 0);
        ~GraphAggregProperty();
        void setStatement(rdf::Statement &statement) {
            label_->setStatement(statement);
        }
        rdf::Statement statement() const {
            return label_->statement();
        }
        QGraphicsLinearLayout *objects() {
            return objects_;
        }

    private:
        GraphicsLabel *l_;
        GraphicsPropertyLabel *label_;
        QGraphicsLinearLayout *objects_;
};


#endif
