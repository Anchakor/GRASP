#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <QtGui>
#include "types.h"
#include "rdf.h"
#include "graphedge.h"
#include "graphicslabel.h"

class GraphNode : public QGraphicsWidget
{
    Q_OBJECT

    public:
        explicit GraphNode(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        explicit GraphNode(rdf::Node &node, QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
        ~GraphNode();

        void setNode(rdf::Node &node) {
            label_->setNode(node);
        }
        rdf::Node node() const {
            return label_->node();
        }
        void contextChanged();
        void genAggregLevel(GraphicsNodeLabel *subjNode, QGraphicsLinearLayout *aggregProps);

        virtual void updateGeometry();
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
        enum { Type = UserType + GRASP_TYPE_NODE };
        int type() const { return Type; }

        void registerEdge(GraphEdge *edge, bool in = true);
        bool unregisterEdge(GraphEdge *edge);
        const QSet<GraphEdge *> *outEdges() const;
        const QSet<GraphEdge *> *inEdges() const;
        bool operator==(const GraphNode &other) const {
            return librdf_node_equals(node(), other.node());
        }
        void adjustEdges();

    protected:
        virtual bool sceneEvent(QEvent *event);
        virtual bool sceneEventFilter(QGraphicsItem *watched, QEvent *event);
        virtual void moveEvent(QGraphicsSceneMoveEvent *event);
        virtual void focusInEvent(QFocusEvent *event);
        virtual void focusOutEvent(QFocusEvent *event);
        virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

    private:
        void init();

        /// should contain only label_ and GraphAggregProperties
        QGraphicsLinearLayout *layout_;
        QSet<GraphEdge *> outEdges_;
        QSet<GraphEdge *> inEdges_;
        bool hover_;
        GraphicsNodeLabel *label_;
        QSet<rdf::Statement> aggregStatements_;
};

#endif
