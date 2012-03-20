#ifndef PREFIXMODEL_H
#define PREFIXMODEL_H

#include <QtGui>

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

    signals:
        void prefixTableChanged();
};

#endif
