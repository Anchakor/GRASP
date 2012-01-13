#include <librdf.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rdf.h"
#include "graph.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadLensMenu()
{
    QMap<QAction *, rdf::Node>::const_iterator j = lensActions.constBegin();
    while (j != lensActions.constEnd()) {
        delete j.key();
        ++j;
    }
    lensActions.clear();

    if(rdf::lensContext) {
        librdf_model_context_remove_statements(rdf::model, rdf::lensContext);
        librdf_free_node(rdf::lensContext);
    }
    Graph g (QString("../lens.ttl"), "text/turtle", rdf::baseUri);
    rdf::lensContext = librdf_new_node_from_node(g.getContext());

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    rdf::Node ntype ("http://www.w3.org/1999/02/22-rdf-syntax-ns#type");
    rdf::Node nl ("http://mud.cz/sw/ed#lens/Lens");
    statement = librdf_new_statement_from_nodes(rdf::world, NULL, librdf_new_node_from_node(ntype), librdf_new_node_from_node(nl));
    stream = librdf_model_find_statements_in_context(rdf::model, statement, rdf::lensContext);
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);

        librdf_node *ns = librdf_statement_get_subject(streamstatement);
        rdf::Node nis (ns);
        char *s = (char *)raptor_term_to_turtle_string(ns, g.nstack_, NULL);
        //printf("lens %s\n", s);
        QAction *a = new QAction(tr(s), this);
        free(s);
        ui->menuLens->addAction(a);
        lensActions.insert(a, nis);

        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}

void MainWindow::loadLens(QAction *act)
{
    if(!lensActions.contains(act)) return;
    Graph *g = reinterpret_cast<Graph *>(ui->mainGraphicsView->scene());
    g->lens_->loadLens(lensActions.value(act));
    g->contextChanged();
    g->update();
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
