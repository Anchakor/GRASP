#include "prefixdock.h"
#include "mainwindow.h"


PrefixDockWidget::PrefixDockWidget(QWidget *parent, Qt::WindowFlags flags) : QDockWidget(parent, flags)
{
    setWindowTitle(tr("Prefixes"));
    tableModel_ = new PrefixModel(this);

    QVBoxLayout *vbl = new QVBoxLayout();

    tableView_.horizontalHeader()->setStretchLastSection(true);
    tableView_.setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView_.setModel(tableModel_);
    vbl->addWidget(&tableView_);

    QHBoxLayout *hbl = new QHBoxLayout();

    addPrefixButton_.setText(tr("Add"));
    addPrefixButton_.setIcon(QIcon::fromTheme("list-add"));
    addPrefixButton_.setIconSize(QSize(16,16));
    hbl->addWidget(&addPrefixButton_);

    removePrefixButton_.setText("");
    removePrefixButton_.setIcon(QIcon::fromTheme("list-remove"));
    removePrefixButton_.setIconSize(QSize(16,16));
    hbl->addWidget(&removePrefixButton_);

    hbl->addStretch();

    //applyButton_.setText(tr("Apply"));
    //hbl->addWidget(&applyButton_);

    vbl->addLayout(hbl);

    QWidget *w = new QWidget(this);
    w->setLayout(vbl);
    setWidget(w);

    //connect(&applyButton_, SIGNAL(released()), this, SLOT(apply()));
    connect(&addPrefixButton_, SIGNAL(released()), this, SLOT(addPrefix()));
    connect(&removePrefixButton_, SIGNAL(released()), this, SLOT(removePrefix()));
    connect(tableModel_, SIGNAL(prefixTableChanged()), this, SIGNAL(prefixesChanged()));
    connect(Ui::view, SIGNAL(graphChanged()), tableModel_, SIGNAL(modelReset()));
}

void PrefixDockWidget::addPrefix()
{
    tableModel_->insertRows(tableModel_->rowCount(), 1);
}

void PrefixDockWidget::removePrefix()
{
    QItemSelectionModel *sm = tableView_.selectionModel();
    QModelIndexList indexes = sm->selectedRows();
    QModelIndex index;

    foreach(index, indexes) {
        tableModel_->removeRows(index.row(), 1);
    }
}
