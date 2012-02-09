#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rdf.h"
#include "graph.h"

extern Graph *lensGraph;
typedef QMap<QAction *, rdf::Node> LensActionsMap;
extern LensActionsMap lensActions;
typedef QPair<QString, rdf::Node> TemplatePair; // path, variable
typedef QMap<rdf::Node, TemplatePair> TemplateMap; // class -> ...
extern TemplateMap templates;

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
