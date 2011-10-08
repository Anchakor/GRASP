#include <typeinfo>
#include "graphview.h"

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
    try {
        context = rdf::loadGraphFromFile(path, "application/x-turtle", librdf_new_uri(rdf::world, (unsigned char *)"test:"));
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        QMessageBox msgBox;
        msgBox.setText(msg);
        msgBox.exec();
        return;
    }

    Graph *g = new Graph(*context, path, this);
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
    try {
        context = rdf::loadGraphFromURI(path, "application/x-turtle", librdf_new_uri(rdf::world, (unsigned char *)"test:"));
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        QMessageBox msgBox;
        msgBox.setText(msg);
        msgBox.exec();
        return;
    }

    Graph *g = new Graph(*context, this);
	delete context;
    graphs.append(g);
	currentGraph = graphs.size() - 1;
    setScene(g);
}

void GraphView::saveFile()
{
	QString path = graphs[currentGraph]->file_;
	//qDebug(path.toLatin1().constData());
	if(!path.isEmpty()) {
		rdf::Node context = graphs[currentGraph]->getContext();
		FILE *file = fopen(path.toLatin1().constData(), "w");
		rdf::saveGraphToFile(context, file);
		fclose(file);
	} else
		saveFileAs();
}

void GraphView::saveFileAs()
{
	QString fileName = QFileDialog::getSaveFileName(this, tr("Save"), QString(), tr("Turtle files (*.ttl)"));
	rdf::Node context = graphs[currentGraph]->getContext();
	FILE *file = fopen(fileName.toLatin1().constData(), "w");
	rdf::saveGraphToFile(context, file);
	fclose(file);
	graphs[currentGraph]->file_ = fileName;
}
