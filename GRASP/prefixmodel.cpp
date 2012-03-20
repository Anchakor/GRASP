#include "prefixmodel.h"
#include "mainwindow.h"

PrefixModel::PrefixModel(QObject *parent) : QAbstractTableModel(parent)
{
}

int PrefixModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    Graph *g = Ui::view->currentGraph();
    if(!g) return 0;
    return g->nslist_.size();
}

int PrefixModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return 2;
}

QVariant PrefixModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    Graph *g = Ui::view->currentGraph();
    if(!g) return QVariant();

    if (index.row() >= g->nslist_.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        QPair<QString, QString> pair = g->nslist_.at(index.row());

        if (index.column() == 0)
            return pair.first;
        else if (index.column() == 1)
            return pair.second;
    }
    return QVariant();
}

QVariant PrefixModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        if(0 == section) {
            return tr("Prefix");
        } else if(1 == section) {
            return tr("URI");
        } else
            return QVariant();
    }
    return QVariant();
}

bool PrefixModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.isValid() && role == Qt::EditRole) {
        int row = index.row();
        Graph *g = Ui::view->currentGraph();
        if(!g) return false;

        QPair<QString, QString> p = g->nslist_.value(row);
        QPair<QString, QString> old = p;

        if (index.column() == 0) {
            p.first = value.toString();
        } else if (index.column() == 1) {
            p.second = value.toString();
        } else
            return false;

        g->nslist_.replace(row, p);
        raptor_namespace_stack *nstack = rdf::getNamespaces(&(g->nslist_));
        if(!nstack) {
            g->nslist_.replace(row, old);
            return false;
        }
        if(g->nstack_) raptor_free_namespaces(g->nstack_);
        g->nstack_ = nstack;

        emit(dataChanged(index, index));
        emit(prefixTableChanged());
        return true;
    }

    return false;
}

bool PrefixModel::insertRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);
    Graph *g = Ui::view->currentGraph();
    if(!g) return false;
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row=0; row < rows; row++) {
        QPair<QString, QString> pair("ex", "urn:examples:");
        g->nslist_.insert(position, pair);
    }

    endInsertRows();
    raptor_namespace_stack *nstack = rdf::getNamespaces(&(g->nslist_));
    if(g->nstack_) raptor_free_namespaces(g->nstack_);
    g->nstack_ = nstack;
    return true;
}

bool PrefixModel::removeRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);
    Graph *g = Ui::view->currentGraph();
    if(!g) return false;
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for (int row=0; row < rows; ++row) {
        g->nslist_.removeAt(position);
    }

    endRemoveRows();
    raptor_namespace_stack *nstack = rdf::getNamespaces(&(g->nslist_));
    if(g->nstack_) raptor_free_namespaces(g->nstack_);
    g->nstack_ = nstack;
    emit(prefixTableChanged());
    return true;
}
