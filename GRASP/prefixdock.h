#ifndef PREFIXDOCK_H
#define PREFIXDOCK_H

#include <QtGui>
#include "prefixmodel.h"

class PrefixDockWidget : public QDockWidget
{
    Q_OBJECT

    public:
        explicit PrefixDockWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0);

    public slots:
        void addPrefix();
        void removePrefix();

    signals:
        void prefixesChanged();

    private:
        QTableView tableView_;
        PrefixModel *tableModel_;

        QToolButton addPrefixButton_;
        QToolButton removePrefixButton_;
        //QPushButton applyButton_;
};

#endif
