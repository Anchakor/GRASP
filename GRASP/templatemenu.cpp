#include "templatemenu.h"

TemplateMenu::TemplateMenu(Graph *g, QWidget *parent) : QMenu(parent), graph_(g)
{
    // when TemplateMenu are nested the slot will be called in each level so checking if actions().contains(QAction *) is in order
    connect(this, SIGNAL(triggered(QAction *)), this, SLOT(insertTemplate(QAction *)));
}

void TemplateMenu::addGeneralTemplates(bool forNode, bool withVariables)
{
    for(Templates::const_iterator i = templates.constBegin(); i != templates.constEnd(); i++) {
        if(i.value()->path.isEmpty() || librdf_node_is_resource(i.value()->ofClass)) continue;
        if(forNode && !librdf_node_is_resource(i.value()->variable)) continue;
        if(!forNode && !withVariables && librdf_node_is_resource(i.value()->variable)) continue;

        QAction *aTemplate = (!i.value()->name.isEmpty()) ? addAction(i.value()->name) : addAction(tr("Unnamed Template"));
        templateActions_.insert(aTemplate, i.value());
    }
}

void TemplateMenu::addClassTemplates(const rdf::Node &nclass, bool forNode, bool withVariables)
{
    for(Templates::const_iterator i = templates.constBegin(); i != templates.constEnd(); i++) {
        if(i.value()->path.isEmpty() || !(i.value()->ofClass == nclass)) continue;
        if(forNode && !librdf_node_is_resource(i.value()->variable)) continue;
        if(!forNode && !withVariables && librdf_node_is_resource(i.value()->variable)) continue;

        QAction *aTemplate = (!i.value()->name.isEmpty()) ? addAction(i.value()->name) : addAction(tr("Unnamed Template"));
        templateActions_.insert(aTemplate, i.value());
    }
}

void TemplateMenu::addNodeTemplates(const rdf::Node &node)
{
    QList<rdf::Node> *classes = rdf::getNodeClasses(graph_->getContext(), node);
    QList<rdf::Node>::const_iterator i = classes->constBegin();
    while(i != classes->constEnd()) {
        TemplateMenu *tm = new TemplateMenu(graph_, this);
        tm->setTitle(i->toQString(graph_->nstack_).append(tr(" Templates")));
        tm->addClassTemplates(*i);
        if(!tm->actions().empty()) addMenu(tm);
        i++;
    }
    delete classes;

    TemplateMenu *tmg = new TemplateMenu(graph_, this);
    tmg->setTitle(tr("General Templates"));
    tmg->addGeneralTemplates();
    if(!tmg->actions().empty()) addMenu(tmg);
}

void TemplateMenu::addGraphTemplates(bool withVariables)
{
    TemplateMenu *tmg = new TemplateMenu(graph_, this);
    tmg->setTitle(tr("General Templates"));
    tmg->addGeneralTemplates(false, withVariables);
    if(!tmg->actions().empty()) addMenu(tmg);

    QSet<rdf::Node> classes;
    for(Templates::const_iterator i = templates.constBegin(); i != templates.constEnd(); i++) {
        Template *t = i.value();
        if(librdf_node_is_resource(t->ofClass)) classes.insert(t->ofClass);
    }
    for(QSet<rdf::Node>::const_iterator j = classes.constBegin(); j != classes.constEnd(); j++) {
        TemplateMenu *tm = new TemplateMenu(graph_, this);
        tm->setTitle(j->toQString(graph_->nstack_).append(tr(" Templates")));
        tm->addClassTemplates(*j, false, withVariables);
        if(!tm->actions().empty()) addMenu(tm);
    }
}

void TemplateMenu::insertTemplate(QAction *act)
{
    if(actions().contains(act)) {
        Template *t = templateActions_.value(act);
        qDebug() << "template path:" << t->path;
    }
}
