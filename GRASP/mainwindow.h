#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rdf.h"
#include "template.h"
#include "graph.h"
#include "layout.h"
#include "prefixdock.h"
#include "graphview.h"

extern Graph *lensGraph;

typedef QHash<QAction *, rdf::Node> LensActions;
extern LensActions lensActions;

typedef QHash<rdf::Node, Template *> Templates; // id -> template
extern Templates templates;


// global values
namespace Ui {
    class MainWindow;
    extern QAction *viewUnusedNodes;
    namespace Layout {
        extern bool apply;
        extern int algorithm;
        extern double sugiyamaNodeDistance;
        extern double sugiyamaLayerDistance;
        extern bool sugiyamaFlip;
        extern double fmmmUnitEdgeLength;
    }
    extern GraphView *view;
}



struct NullGraphPointerException {};

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
    void graphContextChanged();
    void openLayoutDock();
    void openPrefixDock();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    LayoutDockWidget *layoutWidget_;
    PrefixDockWidget *prefixWidget_;

};

#endif // MAINWINDOW_H
