#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rdf.h"
#include "graph.h"

extern Graph *lensGraph;
typedef QHash<QAction *, rdf::Node> LensActions;
extern LensActions lensActions;
typedef QPair<QString, rdf::Node> TemplatePair; // path, variable
typedef QHash<rdf::Node, TemplatePair> Templates; // class -> ...
extern Templates templates;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void loadLensMenu();
    void loadTemplates();
    void loadLens(QAction *act);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
