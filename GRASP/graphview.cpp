#include "graphview.h"
#include "guiutils.h"
#include "searchdialog.h"

GraphView::GraphView(QWidget *parent) : QGraphicsView(parent)
{ 
    setDragMode(QGraphicsView::ScrollHandDrag);

    newGraph(); 
}

void GraphView::addGraph(Graph *g)
{
    graphs.append(g);
    currentGraph_ = graphs.size() - 1;
    setScene(g);
}

Graph *GraphView::currentGraph() const
{
    return graphs[currentGraph_];
}

void GraphView::openFile()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Open graph"), QString(), tr("RDF Files (*.rdf *.ttl *.nt *.n3);;All Files (*.*)"));
    if(NULL == path || path.isEmpty()) return;

    Graph *g;
    try {
        g = Graph::fromFile(path, "text/turtle", rdf::baseUri, this);
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }
    addGraph(g);
}

void GraphView::openURL()
{
    bool ok;
    QString path = QInputDialog::getText(this, tr("Open URL"), tr("URL:"), QLineEdit::Normal, QString("http://mud.cz/foaf.ttl"), &ok);
    if(!ok || path.isEmpty()) return;

    Graph *g;
    try {
        g = Graph::fromURI(path, "text/turtle", rdf::baseUri, this);
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }
    addGraph(g);
}

void GraphView::newGraph()
{
    Graph *g = Graph::newEmpty(this);
    addGraph(g);
}

void GraphView::findDialog()
{
    SearchDialog d (this, this);
    d.exec();
}

