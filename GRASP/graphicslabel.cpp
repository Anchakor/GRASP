#include "graphicslabel.h"
#include "graph.h"
#include "graphutils.h"
#include "contextmenu.h"

GraphicsLabel::GraphicsLabel(QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
    //if(parent) installEventFilter(parent);
}

GraphicsLabel::GraphicsLabel(const QString &text, QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
    //if(parent) installEventFilter(parent);
    setText(text);
}

GraphicsLabel::~GraphicsLabel()
{
}

void GraphicsLabel::setText(const QString &text)
{
    QString tmp(text);
    tmp.replace(QLatin1Char('\n'), QChar::LineSeparator);
    textLayout.setText(tmp);
    setupTextLayout(&textLayout);
    updateGeometry();
}

QString GraphicsLabel::text() const
{
    return textLayout.text();
}

void GraphicsLabel::setFont(const QFont &font)
{
    textLayout.setFont(font);
}

QFont GraphicsLabel::font() const
{
    return textLayout.font();
}

QRectF GraphicsLabel::boundingRect() const
{
    return textLayout.boundingRect();
}

QRectF GraphicsLabel::setupTextLayout(QTextLayout *layout)
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

void GraphicsLabel::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);
    Q_UNUSED(option);

/*    QTextLayout::FormatRange range;
    range.start = 0;
    range.length = textLayout.text().length();
    QList<QTextLayout::FormatRange> formats;
    formats.append(range);
    textLayout.setAdditionalFormats(formats);*/

    textLayout.draw(painter, QPointF(0, 0)); 
}

int GraphicsLabel::type() const
{
    return Type;
}

QSizeF GraphicsLabel::sizeHint(Qt::SizeHint which, const QSizeF &constraint) const
{
    switch (which) {
        case Qt::MinimumSize:
            return boundingRect().size();
        case Qt::PreferredSize:
            return boundingRect().size();
        case Qt::MaximumSize:
            return QSizeF(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
        default:
            qWarning("GraphicsLabel::sizeHint(): Don't know how to handle the value of 'which'");
            break;      
    }
    return constraint;
}

void GraphicsLabel::setGeometry(const QRectF &rect)
{
    prepareGeometryChange();
    QGraphicsWidget::setGeometry(rect);
    setPos(rect.topLeft());
}


GraphicsNodeLabel::GraphicsNodeLabel(QGraphicsWidget *parent) : GraphicsLabel(parent)
{
    init();
}

GraphicsNodeLabel::GraphicsNodeLabel(rdf::Node &node, QGraphicsWidget *parent) : GraphicsLabel(parent)
{
    init();
    setNode(node);
}

GraphicsNodeLabel::~GraphicsNodeLabel()
{
    //if(node_ != NULL) librdf_free_node(node_);
}

void GraphicsNodeLabel::init()
{
    //setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    //setFlag(ItemIsMovable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    //setCacheMode(DeviceCoordinateCache);
}

void GraphicsNodeLabel::setNode(rdf::Node &node) 
{
    node_ = rdf::Node(node);

    setText(node_.toQString((reinterpret_cast<Graph *>(scene()))->nstack_));
}

rdf::Node GraphicsNodeLabel::node() const
{
    return rdf::Node(node_);
}

void GraphicsNodeLabel::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)

    editDialog();
}

void GraphicsNodeLabel::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    Graph *g = reinterpret_cast<Graph *>(scene());
    ContextMenu menu (g);
    //printf("DEBUG context menu node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(node_)));
    menu.addGeneralNodeActions(node_);
    menu.exec(event->screenPos());
    //menu.exec(g->views().at(0)->mapFromScene(mapToScene(QPoint(0,0))));
}

void GraphicsNodeLabel::editDialog()
{
    librdf_node *newnode = NULL;
    RDFNodeEditDialog dialog (&newnode, node_, reinterpret_cast<Graph *>(scene()));

    if(dialog.exec() && newnode) {
        try {
            rdf::replaceOrDeleteNode(reinterpret_cast<Graph *>(scene())->getContext(), node_, newnode);
        } catch (std::exception& e) {
            QString msg ("Error editing the node, probably illegal node form in this position");
            msg.append("'\n Error: ").append(QString(typeid(e).name()));
            alertPopup(msg);
            return;
        }
        Graph *g = reinterpret_cast<Graph *>(scene());
        if(g->nodes_.value(node_)) {
            rdf::Node n2 (newnode);
            uint u = qHash(n2);
            g->loadedNodePositions_[u] = g->nodes_.value(node_)->pos();
        }
        rdf::Node nn = rdf::Node(newnode);
        setNode(nn);
        g->contextChanged();
        librdf_free_node(newnode);
    }
}


GraphicsPropertyLabel::GraphicsPropertyLabel(QGraphicsWidget *parent) : GraphicsLabel(parent)
{
    init();
}

GraphicsPropertyLabel::GraphicsPropertyLabel(rdf::Statement &statement, QGraphicsWidget *parent) : GraphicsLabel(parent)
{
    init();
    setStatement(statement);
}

GraphicsPropertyLabel::~GraphicsPropertyLabel()
{
    //if(statement_ != NULL) librdf_free_statement(statement_);
}

void GraphicsPropertyLabel::init()
{
    //setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    //setFlag(ItemIsMovable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    //setCacheMode(DeviceCoordinateCache);
}

void GraphicsPropertyLabel::setStatement(rdf::Statement &statement)
{
    statement_ = rdf::Statement(statement);

    rdf::Node node (librdf_statement_get_predicate(statement_));
    setText(node.toQString((reinterpret_cast<Graph *>(scene()))->nstack_));
}

rdf::Statement GraphicsPropertyLabel::statement() const
{
    return rdf::Statement(statement_);
}

void GraphicsPropertyLabel::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)

    editDialog();
}

void GraphicsPropertyLabel::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    Graph *g = reinterpret_cast<Graph *>(scene());
    ContextMenu menu (g);
    menu.addGeneralEdgeActions(statement_);
    menu.exec(event->screenPos());
    //menu.exec(g->views().at(0)->mapFromScene(mapToScene(QPoint(0,0))));
}

void GraphicsPropertyLabel::editDialog() 
{
    librdf_node *node = librdf_statement_get_predicate(statement_);
    librdf_node *newnode = NULL;
    RDFNodeEditDialog dialog (&newnode, node, reinterpret_cast<Graph *>(scene()), true);

    if(dialog.exec() && newnode) {
        rdf::Statement stat (statement_);
        librdf_statement_set_predicate(stat, newnode);
        try {
            rdf::addOrReplaceStatement(reinterpret_cast<Graph *>(scene())->getContext(), stat, statement_);
        } catch (std::exception& e) {
            QString msg ("Error editing the node, probably illegal node form in this position");
            msg.append("'\n Error: ").append(QString(typeid(e).name()));
            alertPopup(msg);
            return;
        }
        setStatement(stat);
        reinterpret_cast<Graph *>(scene())->contextChanged();
        //librdf_free_statement(stat); TODO uncomment this when redland 1.0.15 comes out
    }
}

