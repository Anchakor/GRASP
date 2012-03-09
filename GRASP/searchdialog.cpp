#include "searchdialog.h"


SearchDialog::SearchDialog(GraphView *view, QWidget *parent, Qt::WindowFlags f) : QDialog(parent, f), graphview_(view)
{
    ui.setupUi(this);

    connect(ui.previousButton, SIGNAL(released()), this, SLOT(previous()));
    connect(ui.nextButton, SIGNAL(released()), this, SLOT(next()));

    graphitems_ = graphview_->currentGraph()->items();
    iter_ = graphitems_.begin();
}

void SearchDialog::search(bool forward)
{
    GraphicsLabel *l = NULL;
    do {
        if(forward) {
            if(iter_ != graphitems_.end()) iter_++;
            if(iter_ == graphitems_.end()) return;
        } else {
            if(iter_ == graphitems_.begin()) return;
            iter_--;
        }
        if(ui.edgeCheckBox->isChecked() && qgraphicsitem_cast<GraphicsPropertyLabel *>(*iter_)) {
            l = dynamic_cast<GraphicsLabel *>(qgraphicsitem_cast<GraphicsPropertyLabel *>(*iter_));
        } else if(!ui.edgeCheckBox->isChecked() && qgraphicsitem_cast<GraphicsNodeLabel *>(*iter_)) {
            l = dynamic_cast<GraphicsLabel *>(qgraphicsitem_cast<GraphicsNodeLabel *>(*iter_));
        } else l = NULL;
    } while(!l || !(l->text().contains(ui.lineEdit->text())));
    if(l) {
        l->setFocus();
        graphview_->centerOn(l);
    }
}
