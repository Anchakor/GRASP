#include "graphview.h"
#include "guiutils.h"

GraphView::GraphView(QWidget *parent) : QGraphicsView(parent)
{ 
    setDragMode(QGraphicsView::ScrollHandDrag);

    Graph *graph = new Graph(this);
    
  /*  GraphicsLabel *l1 = new GraphicsLabel("TEST");
    GraphicsLabel *l2 = new GraphicsLabel("XXXX\nOOOO");

    //QGraphicsLinearLayout *layout = new QGraphicsLinearLayout(Qt::Vertical);
    //layout->addItem(l1);
    //layout->addItem(l2);
    GraphNode *node = new GraphNode();
    static_cast<QGraphicsLinearLayout *>(node->layout())->addItem(l1);
    static_cast<QGraphicsLinearLayout *>(node->layout())->addItem(l2);
    graph->addItem(node);

    GraphNode *n2 = new GraphNode();
    static_cast<QGraphicsLinearLayout *>(n2->layout())->addItem(new GraphicsLabel("TTT"));
    graph->addItem(n2);
    n2->setPos(50,100);

    GraphEdge *e = new GraphEdge();
    e->setSourceNode(node);
    e->setDestNode(n2);
    e->setText("property");
    e->adjust();
    graph->addItem(e); */
    
    setScene(graph);
}

void GraphView::openFile()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Open graph"), QString(), tr("RDF Files (*.rdf *.ttl *.nt *.n3);;All Files (*.*)"));
    if(NULL == path || path.isEmpty()) return;

    rdf::Node *context;
    raptor_namespace_stack *nstack = NULL;
    QHash<QString, QString> nshash;
    QHash<QString, QPointF> loadedNodePositions;
    try {
        context = rdf::loadGraphFromFile(path, &nstack, "text/turtle", rdf::baseUri, &nshash, &loadedNodePositions);
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }

    Graph *g = new Graph(*context, path, nstack, nshash, loadedNodePositions, this);
    delete context;
    graphs.append(g);
    currentGraph = graphs.size() - 1;
    setScene(g);
}

void GraphView::openURL()
{
    bool ok;
    QString path = QInputDialog::getText(this, tr("Open URL"), tr("URL:"), QLineEdit::Normal, QString("http://mud.cz/foaf.ttl"), &ok);
    if(!ok || path.isEmpty()) return;

    rdf::Node *context;
    raptor_namespace_stack *nstack = NULL;
    QHash<QString, QString> nshash;
    try {
        context = rdf::loadGraphFromURI(path, &nstack, "text/turtle", rdf::baseUri, &nshash);
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }

    Graph *g = new Graph(*context, nstack, nshash, this);
    delete context;
    graphs.append(g);
    currentGraph = graphs.size() - 1;
    setScene(g);
}

