#ifndef TEMPLATEMENU_H
#define TEMPLATEMENU_H

#include <QtGui>
#include "rdf.h"
#include "graph.h"
#include "mainwindow.h"

typedef QHash<QAction *, Template *> TemplateActions;

class TemplateMenu : public QMenu
{
    Q_OBJECT

    public:
        explicit TemplateMenu(Graph *g, QWidget *parent = 0);

        void addGeneralTemplates(bool forNode = true);
        void addClassTemplates(const rdf::Node &nclass, bool forNode = true);
        void addNodeTemplates(const rdf::Node &node);

        Graph *graph_;
        TemplateActions templateActions_;

    public slots:
        void insertTemplate(QAction *act);
};

#endif
