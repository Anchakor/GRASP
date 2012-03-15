#ifndef PREFIXDOCK_H
#define PREFIXDOCK_H

#include <QtGui>

class PrefixDockWidget : public QDockWidget
{
    Q_OBJECT

    public:
        explicit PrefixDockWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0);

    private:
        QTableView tableView_;

        QPushButton addRowButton_;
        QPushButton applyButton_;
};



#endif
