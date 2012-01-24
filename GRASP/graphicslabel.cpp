#include "graphicslabel.h"
#include "graph.h"
#include "graphutils.h"
#include "contextmenu.h"

GraphicsLabel::GraphicsLabel(QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
    if(parent) installEventFilter(parent);
}

GraphicsLabel::GraphicsLabel(const QString &text, QGraphicsWidget *parent) : QGraphicsWidget(parent)
{
    if(parent) installEventFilter(parent);
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

GraphicsNodeLabel::GraphicsNodeLabel(librdf_node *node, QGraphicsWidget *parent) : GraphicsLabel(parent)
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
    node_ = NULL;
    //setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    //setFlag(ItemIsMovable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    //setCacheMode(DeviceCoordinateCache);
}

void GraphicsNodeLabel::setNode(librdf_node *node) 
{
    if(node_ != NULL) librdf_free_node(node_);
    node_ = librdf_new_node_from_node(node);

    char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node_, (reinterpret_cast<Graph *>(scene()))->nstack_, NULL));
    setText(QString::fromLocal8Bit(str));
    free(str);
}

const librdf_node *GraphicsNodeLabel::node() const
{
    return node_;
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
    rdf::Node n (node_);
    //printf("DEBUG context menu node: %s\n", reinterpret_cast<const char *>(librdf_node_to_string(n)));
    menu.addGeneralNodeActions(n);
    menu.exec(event->screenPos());
    //menu.exec(g->views().at(0)->mapFromScene(mapToScene(QPoint(0,0))));
}

void GraphicsNodeLabel::editDialog()
{
    librdf_node *newnode = NULL;
    RDFNodeEditDialog dialog (&newnode, node_, reinterpret_cast<Graph *>(scene()));

    if(dialog.exec() && newnode) {
        try {
            rdf::replaceNode(reinterpret_cast<Graph *>(scene())->getContext(), newnode, node_);
        } catch (std::exception& e) {
            QString msg ("Error editing the node, probably illegal node form in this position");
            msg.append("'\n Error: ").append(QString(typeid(e).name()));
            alertPopup(msg);
            return;
        }
        setNode(newnode);
        reinterpret_cast<Graph *>(scene())->contextChanged();
        librdf_free_node(newnode);
    }
}


GraphicsPropertyLabel::GraphicsPropertyLabel(QGraphicsWidget *parent) : GraphicsLabel(parent)
{
    init();
}

GraphicsPropertyLabel::GraphicsPropertyLabel(librdf_statement *statement, QGraphicsWidget *parent) : GraphicsLabel(parent)
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
    statement_ = NULL;
    //setAcceptHoverEvents(true);
    setFlag(ItemIsSelectable);
    //setFlag(ItemIsMovable);
    setFocusPolicy(Qt::StrongFocus); // setFlag(ItemIsFocusable);
    //setCacheMode(DeviceCoordinateCache);
}

void GraphicsPropertyLabel::setStatement(librdf_statement *statement)
{
    if(statement_ != NULL) librdf_free_statement(statement_);
    statement_ = librdf_new_statement_from_statement(const_cast<librdf_statement *>(statement));

    librdf_node *node = librdf_statement_get_predicate(statement_);
    char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node, (reinterpret_cast<Graph *>(scene()))->nstack_, NULL));
    setText(QString::fromLocal8Bit(const_cast<const char *>(str)));
    free(str);
}

const librdf_statement *GraphicsPropertyLabel::statement() const
{
    return statement_;
}

void GraphicsPropertyLabel::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)

    editDialog();
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
        setStatement(static_cast<librdf_statement *>(stat));
        reinterpret_cast<Graph *>(scene())->contextChanged();
        //librdf_free_statement(stat); TODO uncomment this when redland 1.0.15 comes out
    }
}

void GraphicsPropertyPatternLabel::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)

    editDialog();
}
