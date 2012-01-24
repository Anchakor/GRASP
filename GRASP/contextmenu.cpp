#include "contextmenu.h"
#include "guiutils.h"
#include "graphutils.h"

ContextMenu::ContextMenu(Graph *g, QWidget *parent) : QMenu(parent), graph_(g)
{
}

void ContextMenu::addGeneralNodeActions(rdf::Node &node)
{
    node_ = node;
    QAction *aAddRelation = addAction(tr("Add Relation"));
    connect(aAddRelation, SIGNAL(triggered()), SLOT(addRelation()));
}

void ContextMenu::addRelation()
{
    QString s (GRASPURIPREFIX);
    s.append("NULL");
    rdf::Node n (s.toLatin1().constData());
    rdf::Statement stat (rdf::world, node_, n, n);
    //printf("add relation: %s\n", librdf_statement_to_string(stat));
    try {
        rdf::addOrReplaceStatement(graph_->getContext(), stat);
    } catch (std::exception& e) {
        QString msg ("Error adding the relation, probably illegal RDF triple form");
        msg.append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }
    graph_->contextChanged();
}
