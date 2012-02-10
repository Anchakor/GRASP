#include "contextmenu.h"
#include "guiutils.h"
#include "graphutils.h"
#include "templatemenu.h"

ContextMenu::ContextMenu(Graph *g, QWidget *parent) : QMenu(parent), graph_(g)
{
}

void ContextMenu::addGeneralNodeActions(rdf::Node &node)
{
    node_ = node;
    QAction *aAddRelation = addAction(tr("Add Relation"));
    connect(aAddRelation, SIGNAL(triggered()), SLOT(addRelation()));
    QAction *aRemoveNode = addAction(tr("Remove Node"));
    connect(aRemoveNode, SIGNAL(triggered()), SLOT(removeNode()));
    TemplateMenu *m = new TemplateMenu(graph_, this);
    m->setTitle(tr("Insert Template"));
    m->addNodeTemplates(node);
    addMenu(m);
}

void ContextMenu::addGeneralEdgeActions(rdf::Statement &statement)
{
    statement_ = statement;
    QAction *aRemoveRelation = addAction(tr("Remove Relation"));
    connect(aRemoveRelation, SIGNAL(triggered()), SLOT(removeRelation()));
}

void ContextMenu::addGeneralGraphActions()
{
    QAction *aAddTriple = addAction(tr("Add Relation"));
    connect(aAddTriple, SIGNAL(triggered()), SLOT(addTriple()));
}

void ContextMenu::addRelation()
{
    QString s (GRASPURIPREFIX);
    s.append("NULL");
    rdf::Node n (s.toLatin1().constData());
    rdf::Statement stat;
    if(librdf_node_is_literal(node_)) {
        stat = rdf::Statement(rdf::world, n, n, node_);
    } else {
        int ret = QMessageBox::question(this, tr("Add Relation"),
                                tr("Add relation from the node (instead of to it)?"),
                                QMessageBox::Yes | QMessageBox::No,
                                QMessageBox::Yes);
        if(ret == QMessageBox::Yes) {
            stat = rdf::Statement(rdf::world, node_, n, n);
        } else {
            stat = rdf::Statement(rdf::world, n, n, node_);
        }
    }
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

void ContextMenu::removeRelation()
{
    try {
        rdf::removeStatement(graph_->getContext(), statement_);
    } catch (std::exception& e) {
        QString msg ("Error removing the statement");
        msg.append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }
    graph_->contextChanged();
}

void ContextMenu::removeNode()
{
    try {
        rdf::replaceOrDeleteNode(graph_->getContext(), node_);
    } catch (std::exception& e) {
        QString msg ("Error removing the node");
        msg.append("'\n Error: ").append(QString(typeid(e).name()));
        alertPopup(msg);
        return;
    }
    graph_->contextChanged();
}

void ContextMenu::addTriple()
{
    QString s (GRASPURIPREFIX);
    s.append("NULL");
    rdf::Node n (s.toLatin1().constData());
    s.append("2");
    rdf::Node n2 (s.toLatin1().constData());
    rdf::Statement stat;
    stat = rdf::Statement(rdf::world, n, n, n2);
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
