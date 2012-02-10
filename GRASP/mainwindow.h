#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rdf.h"
#include "graph.h"

extern Graph *lensGraph;

typedef QHash<QAction *, rdf::Node> LensActions;
extern LensActions lensActions;

struct Template {
    QString name;
    QString path;
    rdf::Node variable;
    rdf::Node ofClass;
};
typedef QHash<rdf::Node, Template> Templates; // id -> template
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
