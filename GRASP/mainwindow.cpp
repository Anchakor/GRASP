#include <librdf.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->action_File, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(openFile()));
    connect(ui->action_URL, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(openURL()));
    connect(ui->action_Save, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(saveFile()));
    connect(ui->actionS_ave_as, SIGNAL(triggered()), ui->mainGraphicsView, SLOT(saveFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
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
