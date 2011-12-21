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
    RDFNodeEditDialog(librdf_node **result, librdf_node *node, Graph *graph, bool urionly = false, QWidget *parent = 0, Qt::WindowFlags f = 0) : QDialog(parent, f), graph_(graph), result_(result) {
        ui.setupUi(this);
        setAttribute(Qt::WA_DeleteOnClose, false);
        if(urionly) {
            ui.tabWidget->removeTab(2);
            ui.tabWidget->removeTab(1);
        }

        if(librdf_node_is_resource(node)) {
            ui.tabWidget->setCurrentIndex(0);
            char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(node, graph->nstack_, NULL));
            ui.uriedit->setText(QString::fromLocal8Bit(str));
            free(str);
        } else if(librdf_node_is_literal(node)) {
            ui.tabWidget->setCurrentIndex(1);
            ui.valueedit->setPlainText(QString::fromLocal8Bit(reinterpret_cast<char *>(librdf_node_get_literal_value(node))));
            librdf_uri* uri = librdf_node_get_literal_value_datatype_uri(node);
            if(NULL != uri) {
                char *str = reinterpret_cast<char *>(raptor_uri_to_turtle_string(rdf::raptor, uri, graph->nstack_, NULL));
                ui.datatypeedit->setText(QString::fromLocal8Bit(str));
                free(str);
            }
            ui.languageedit->setText(const_cast<const char *>(librdf_node_get_literal_value_language(node)));
        } else if(librdf_node_is_blank(node)) {
            ui.tabWidget->setCurrentIndex(2);
            char *str = qstrdup(reinterpret_cast<const char *>(librdf_node_get_blank_identifier(node)));
            ui.bnodelabeledit->setText(QString::fromLocal8Bit(str));
            free(str);
        }
        *result = NULL;
    }

public slots:
    virtual void accept() {
        // URI resource
        if(0 == ui.tabWidget->currentIndex()) {
            unsigned char *str = reinterpret_cast<unsigned char *>(qstrdup(ui.uriedit->text().toLatin1().constData()));
            //printf("res %s %d\n", str, strlen(reinterpret_cast<const char *>(str)));
            if(str[0] == '<') {
                unsigned char *s = reinterpret_cast<unsigned char *>(calloc(ui.uriedit->text().size()-1, sizeof(unsigned char)));
                memcpy(s, str+1, ui.uriedit->text().size()-2);
                s[ui.uriedit->text().size()-2] = '\0';
                *result_ = librdf_new_node_from_uri_string(rdf::world, s);
                free(s);
            } else {
                librdf_uri *uri = raptor_qname_string_to_uri(graph_->nstack_, str, strlen(reinterpret_cast<const char *>(str)));
                if(uri) {
                    //printf("readtest: %s\n", librdf_uri_to_string(uri));
                    *result_ = librdf_new_node_from_uri(rdf::world, uri);
                    librdf_free_uri(uri);
                }
            }
            free(str);
        // Literal
        } else if(1 == ui.tabWidget->currentIndex()) {
            unsigned char *str = reinterpret_cast<unsigned char *>(qstrdup(ui.valueedit->toPlainText().toLatin1().constData()));
            unsigned char *datatypestr = reinterpret_cast<unsigned char *>(qstrdup(ui.datatypeedit->text().toLatin1().constData()));
            char *langstr = qstrdup(ui.languageedit->text().toLatin1().constData());
            //printf("lit %s %d\n", str, strlen(reinterpret_cast<const char *>(str)));
            if(str) {
                librdf_uri *duri = NULL;
                if(datatypestr[0] == '\0') { ;
                } else if(datatypestr[0] == '<') {
                    unsigned char *s = reinterpret_cast<unsigned char *>(calloc(ui.datatypeedit->text().size()-1, sizeof(unsigned char)));
                    memcpy(s, datatypestr+1, ui.datatypeedit->text().size()-2);
                    s[ui.datatypeedit->text().size()-2] = '\0';
                    duri = librdf_new_uri(rdf::world, s);
                    if(!duri) {
                        QString msg ("Error editing the node, malformed datatype URI syntax");
                        alertPopup(msg);
                    }
                    free(s);
                } else {
                    duri = raptor_qname_string_to_uri(graph_->nstack_, datatypestr, strlen(reinterpret_cast<const char *>(datatypestr)));
                    if(!duri) {
                        QString msg ("Error editing the node, malformed datatype URI syntax while using namespace abbrevation");
                        alertPopup(msg);
                    }
                }
                if(duri) {
                    //printf("readtest: %s\n", librdf_uri_to_string(duri));
                    *result_ = librdf_new_node_from_typed_literal(rdf::world, str, const_cast<const char *>(langstr), duri);
                    librdf_free_uri(duri);
                }/* else */ else {
                    *result_ = librdf_new_node_from_literal(rdf::world, str, const_cast<const char *>(langstr), 0);
                }
            }
            free(langstr);
            free(datatypestr);
            free(str);
        // Blank node
        } else if(2 == ui.tabWidget->currentIndex()) {
            unsigned char *str = reinterpret_cast<unsigned char *>(qstrdup(ui.bnodelabeledit->text().toLatin1().constData()));
            //printf("bnd %s %d\n", str, strlen(reinterpret_cast<const char *>(str)));
            *result_ = librdf_new_node_from_blank_identifier(rdf::world, str);
            free(str);
        }
        if(!(*result_)) {
            QString msg ("Error editing the node, malformed syntax,\nmaybe URI syntax while using namespace abbrevation");
            alertPopup(msg);
        }

        QDialog::accept();
    }


private:
    Ui::NodeEditDialog ui;
    Graph *graph_;
    librdf_node **result_;

};

#endif
