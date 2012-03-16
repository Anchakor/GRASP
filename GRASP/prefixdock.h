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

class PrefixModel : public QAbstractTableModel
{
    Q_OBJECT

    public:
        explicit PrefixModel(QObject *parent = 0);
        virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
        virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
        virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
        virtual QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
        virtual bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
        virtual bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex());
        virtual bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
        virtual Qt::ItemFlags flags(const QModelIndex &index) const {
            return Qt::ItemIsEditable | QAbstractItemModel::flags(index);
        }
        void addPrefix();

    signals:
        void prefixesChanged();
};

#endif
