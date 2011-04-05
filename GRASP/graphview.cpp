#include <typeinfo>
#include "graphview.h"

GraphView::GraphView(QWidget *parent) : QGraphicsView(parent)
{ 
    Graph *graph = new Graph(this);
    
    GraphicsLabel *l1 = new GraphicsLabel("TEST");
    GraphicsLabel *l2 = new GraphicsLabel("XXXX\nOOOO");

    QGraphicsLinearLayout *layout = new QGraphicsLinearLayout(Qt::Vertical);
    layout->addItem(l1);
    layout->addItem(l2);

    QGraphicsWidget *form = new QGraphicsWidget;
    form->setLayout(layout);

    graph->addItem(form);
    
    setScene(graph);
}

void GraphView::openFile()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Open graph"), QString(), tr("RDF Files (*.rdf *.ttl *.nt *.n3);;All Files (*.*)"));
    if(NULL == path) return;

    librdf_node *context;
    try {
        context = rdf::loadGraphFromFile(path);
    } catch (std::exception& e) {
        QString msg("Couldn't open graph '");
        msg.append(path).append("'\n Error: ").append(QString(typeid(e).name()));
        QMessageBox msgBox;
        msgBox.setText(msg);
        msgBox.exec();
        return;
    }

    Graph *g = new Graph(context, this);
    graphs.append(g);
    setScene(g);
}

void GraphView::openURL()
{
}
