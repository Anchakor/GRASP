#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rdf.h"
#include "graph.h"

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
    void loadLens(QAction *act);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    Graph *lensGraph_;
    QMap<QAction *, rdf::Node> lensActions_;

};

#endif // MAINWINDOW_H
