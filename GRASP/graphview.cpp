#include <QtSvg>
#include "graphview.h"
#include "guiutils.h"
#include "searchdialog.h"
#include "layout.h"

GraphView::GraphView(QWidget *parent) : QGraphicsView(parent)
{
    setDragMode(QGraphicsView::ScrollHandDrag);
    setAlignment(Qt::AlignCenter);
    pastScale = 1.0;

    newGraph(); 
}

void GraphView::addGraph(Graph *g)
{
    graphs.append(g);
    currentGraph_ = graphs.size() - 1;
    setScene(g);
    emit graphChanged();
}

Graph *GraphView::currentGraph() const
{
    if(graphs.size() < 1) return NULL;
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

void GraphView::zoom(int i)
{
    qreal x = (i / 100.0);
    x = pow(exp(x-1), 4);
    qreal y = (1.0 / pastScale) * x;
    pastScale = x;
    scale(y, y);
}

void GraphView::saveSVG()
{
    Graph *g = currentGraph();
    if(!g) {
        QString msg("Error: There is no current graph");
        alertPopup(msg);
        return;
    }
    QString newPath = QFileDialog::getSaveFileName(this, tr("Export to SVG"), QString(), tr("SVG files (*.svg)"));
    if(newPath.isEmpty()) return;

    QSvgGenerator generator;
    generator.setFileName(newPath);
    generator.setSize(QSize(200, 200));
    generator.setViewBox(QRect(0, 0, 200, 200));
    generator.setTitle(tr("Ontology, edited by GRASP"));
    generator.setDescription(tr("Ontology, edited by GRASP"));
    QPainter painter;
    painter.begin(&generator);
    g->render(&painter);
    painter.end();
}
