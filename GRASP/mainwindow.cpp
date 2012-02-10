#include <librdf.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rdf.h"
#include "graph.h"

Graph *lensGraph = NULL;
LensActions lensActions;
Templates templates;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->action_File, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(openFile()));
    connect(ui->action_URL, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(openURL()));
    connect(ui->action_Save, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(saveFile()));
    connect(ui->actionS_ave_as, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(saveFileAs()));
    connect(ui->actionReload, SIGNAL(triggered()), this, SLOT(loadLensMenu()));
    connect(ui->menuLens, SIGNAL(triggered(QAction *)), this, SLOT(loadLens(QAction *)));
    loadLensMenu();
    loadTemplates();
}

MainWindow::~MainWindow()
{
    delete lensGraph;
    delete ui;
}

void MainWindow::loadLensMenu()
{
    LensActions::const_iterator j = lensActions.constBegin();
    while (j != lensActions.constEnd()) {
        delete j.key();
        ++j;
    }
    lensActions.clear();

    Graph *newLensGraph = Graph::fromFile(QString("../lens.ttl"), "text/turtle", rdf::baseUri);
    if(lensGraph) delete lensGraph;
    lensGraph = newLensGraph;

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    rdf::Node ntype (RDFURIPREFIX"type");
    rdf::Node nl (LENSURIPREFIX"Lens");
    statement = librdf_new_statement_from_nodes(rdf::world, NULL, librdf_new_node_from_node(ntype), librdf_new_node_from_node(nl));
    stream = librdf_model_find_statements_in_context(rdf::model, statement, lensGraph->getContext());
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);

        librdf_node *ns = librdf_statement_get_subject(streamstatement);
        rdf::Node nis (ns);
        QAction *a = new QAction(nis.toQString(lensGraph->nstack_), this);
        ui->menuLens->addAction(a);
        lensActions.insert(a, nis);

        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}

void MainWindow::loadTemplates()
{
    templates.clear();

    Graph *templatesGraph = Graph::fromFile(QString("../templates.ttl"), "text/turtle", rdf::baseUri);

    librdf_stream *stream;
    librdf_statement *streamstatement;

    stream = librdf_model_context_as_stream(rdf::model, templatesGraph->getContext());
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);

        librdf_node *ns = librdf_statement_get_subject(streamstatement);
        rdf::Node nis (ns);
        librdf_node *np = librdf_statement_get_predicate(streamstatement);
        rdf::Node nip (np);
        librdf_node *no = librdf_statement_get_object(streamstatement);
        rdf::Node nio (no);

        if(nip == rdf::Node(TEMPLATESURIPREFIX"class") && librdf_node_is_resource(no)) {
            Template t = templates[nis];
            t.variable = nio;
        } else if(nip == rdf::Node(TEMPLATESURIPREFIX"variable") && librdf_node_is_resource(no)) {
            Template t = templates[nis];
            t.variable = nio;
        } else if(nip == rdf::Node(TEMPLATESURIPREFIX"path") && librdf_node_is_literal(no)) {
            Template t = templates[nis];
            t.path = QString(reinterpret_cast<char *>(librdf_node_get_literal_value(no)));
        } else if(nip == rdf::Node(TEMPLATESURIPREFIX"name") && librdf_node_is_literal(no)) {
            Template t = templates[nis];
            t.name = QString(reinterpret_cast<char *>(librdf_node_get_literal_value(no)));
        }
        librdf_stream_next(stream);
    }
    librdf_free_stream(stream);
    delete templatesGraph;
}

void MainWindow::loadLens(QAction *act)
{
    if(!lensActions.contains(act)) return;
    Graph *g = reinterpret_cast<Graph *>(ui->mainGraphicsView->scene());
    g->lens_.loadLens(lensActions.value(act));
    g->contextChanged();
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
