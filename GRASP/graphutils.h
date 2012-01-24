#ifndef GRAPHUTILS_H
#define GRAPHUTILS_H

#include "rdf.h"
#include "graph.h"
#include "ui_nodeedit.h"
#include "guiutils.h"

class RDFNodeEditDialog : public QDialog
{
    Q_OBJECT

public:
    RDFNodeEditDialog(librdf_node **result, librdf_node *node, Graph *graph, bool urionly = false, QWidget *parent = 0, Qt::WindowFlags f = 0);

public slots:
    virtual void accept();

private:
    Ui::NodeEditDialog ui;
    Graph *graph_;
    librdf_node **result_;

};

namespace GraphUtils {


}


#endif
