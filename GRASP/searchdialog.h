#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include "rdf.h"
#include "graphview.h"
#include "ui_search.h"

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    SearchDialog(GraphView *view, QWidget *parent = 0, Qt::WindowFlags f = 0);

private:
    void search(bool forward = true);

public slots:
    void previous() { search(false); };
    void next() { search(); };

private:
    Ui::SearchDialog ui;
    GraphView *graphview_;
    QList<QGraphicsItem *> graphitems_;
    QList<QGraphicsItem *>::iterator iter_;
};



#endif
