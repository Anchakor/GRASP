#include "templatemenu.h"

TemplateMenu::TemplateMenu(Graph *g, QWidget *parent) : QMenu(parent), graph_(g)
{
    connect(this, SIGNAL(triggered(QAction *)), this, SLOT(loadLens(QAction *)));
}

void TemplateMenu::addGeneralTemplates()
{
    Templates::const_iterator i = templates.constBegin();
    while(i != templates.constEnd()) {
        if(!i.value().path.isEmpty()) {
            QAction *aTemplate = (!i.value().name.isEmpty()) ? addAction(i.value().name) : addAction(tr("Unnamed Template"));
            templateActions_.insert(aTemplate, &const_cast<Template &>(i.value()));
        }
        i++;
    }
}

void TemplateMenu::addClassTemplates(const rdf::Node &nclass)
{
    Templates::const_iterator i = templates.constBegin();
    while(i != templates.constEnd()) {
        if(!i.value().path.isEmpty() && i.value().ofClass == nclass) {
            QAction *aTemplate = (!i.value().name.isEmpty()) ? addAction(i.value().name) : addAction(tr("Unnamed Template"));
            templateActions_.insert(aTemplate, &const_cast<Template &>(i.value()));
        }
        i++;
    }
}

void TemplateMenu::addNodeTemplates(const rdf::Node &node)
{
    QList<rdf::Node> *classes = rdf::getNodeClasses(graph_->getContext(), node);
    QList<rdf::Node>::const_iterator i = classes->constBegin();
    while(i != classes->constEnd()) {
        TemplateMenu *tm = new TemplateMenu(graph_, this);
        tm->setTitle(i->toQString(graph_->nstack_).append(" Templates"));
        tm->addClassTemplates(*i);
        addMenu(tm);
        i++;
    }
    delete classes;

    TemplateMenu *tmg = new TemplateMenu(graph_, this);
    tmg->setTitle(tr("General Templates"));
    tmg->addGeneralTemplates();
    addMenu(tmg);
}

void TemplateMenu::insertTemplate(QAction *act)
{

}