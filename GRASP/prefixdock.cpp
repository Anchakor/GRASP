#include "prefixdock.h"
#include "mainwindow.h"


PrefixDockWidget::PrefixDockWidget(QWidget *parent, Qt::WindowFlags flags) : QDockWidget(parent, flags)
{
    setWindowTitle(tr("Prefixes"));

    QVBoxLayout *vbl = new QVBoxLayout();

    tableView_.horizontalHeader()->setStretchLastSection(true);
    vbl->addWidget(&tableView_);

    QHBoxLayout *hbl = new QHBoxLayout();
    addRowButton_.setText(tr("Add Prefix"));
    addRowButton_.setIcon(QIcon::fromTheme("list-add"));
    addRowButton_.setIconSize(QSize(16,16));
    hbl->addWidget(&addRowButton_);

    hbl->addStretch();

    applyButton_.setText(tr("Apply"));
    hbl->addWidget(&applyButton_);

    vbl->addLayout(hbl);

    QWidget *w = new QWidget(this);
    w->setLayout(vbl);
    setWidget(w);

    //connect(&applyButton_, SIGNAL(released()), this, SLOT(apply()));
}


