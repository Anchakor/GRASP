#include "templatemenu.h"
#include "guiutils.h"

TemplateMenu::TemplateMenu(Graph *g, QWidget *parent) : QMenu(parent), graph_(g)
{
    init();
}

TemplateMenu::TemplateMenu(Graph *g, const rdf::Node &node, QWidget *parent) : QMenu(parent), graph_(g), node_(node)
{
    init();
}

void TemplateMenu::init()
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

void TemplateMenu::addNodeTemplates()
{
    QList<rdf::Node> *classes = rdf::getNodeClasses(graph_->getContext(), node_);
    QList<rdf::Node>::const_iterator i = classes->constBegin();
    while(i != classes->constEnd()) {
        TemplateMenu *tm = new TemplateMenu(graph_, node_, this);
        tm->setTitle(i->toQString(graph_->nstack_).append(tr(" Templates")));
        tm->addClassTemplates(*i);
        if(!tm->actions().empty()) addMenu(tm);
        i++;
    }
    delete classes;

    TemplateMenu *tmg = new TemplateMenu(graph_, node_, this);
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
        Graph *g;
        try {
            g = Graph::fromFile(t->path);
        } catch (std::exception& e) {
            QString msg("Couldn't open template '");
            msg.append(t->path).append("'\n Error: ").append(QString(typeid(e).name()));
            alertPopup(msg);
            return;
        }
        librdf_stream *stream;
        librdf_statement *streamstatement;

        stream = librdf_model_context_as_stream(rdf::model, g->getContext());
        if(NULL == stream) throw rdf::ModelAccessException();

        while(!librdf_stream_end(stream)) {
            streamstatement = librdf_stream_get_object(stream);
            rdf::Statement statement (streamstatement);

            if(librdf_node_is_resource(t->variable) && librdf_node_is_resource(node_)) {
                librdf_node *ns = librdf_statement_get_subject(statement);
                rdf::Node nis (ns);
                librdf_node *np = librdf_statement_get_predicate(statement);
                rdf::Node nip (np);
                librdf_node *no = librdf_statement_get_object(statement);
                rdf::Node nio (no);

                if(nis == t->variable) {
                    librdf_statement_set_subject(statement, librdf_new_node_from_node(node_));
                }
                if(nip == t->variable) {
                    librdf_statement_set_predicate(statement, librdf_new_node_from_node(node_));
                }
                if(nio == t->variable) {
                    librdf_statement_set_object(statement, librdf_new_node_from_node(node_));
                }
            }
            if(librdf_model_context_add_statement(rdf::model, graph_->getContext(), statement))
                throw rdf::ModelAccessException();
            librdf_stream_next(stream);
        }
        librdf_free_stream(stream);
        delete g;
        graph_->contextChanged();
    }
}
