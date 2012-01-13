#ifndef GRAPH_H
#define GRAPH_H

#include <QtGui>
#include "rdf.h"
#include "graphicslabel.h"
#include "graphnode.h"
#include "graphedge.h"
#include "lens.h"
#include "ui_nodeedit.h"

class Graph : public QGraphicsScene
{
    Q_OBJECT

    public:
        explicit Graph(QObject *parent = 0);
        explicit Graph(const QString &file, const char *mimeType = "text/turtle", librdf_uri *baseUri = rdf::baseUri, QObject *parent = 0);
        explicit Graph(rdf::Node &context, QObject *parent = 0);
        explicit Graph(rdf::Node &context, raptor_namespace_stack *nstack, QHash<QString, QString> &nshash, QObject *parent = 0);
        explicit Graph(rdf::Node &context, QString &file, QObject *parent = 0);
        explicit Graph(rdf::Node &context, QString &file, raptor_namespace_stack *nstack, QHash<QString, QString> &nshash, QHash<uint, QPointF> &loadedNodePositions, QObject *parent = 0);
        ~Graph();
        void init();

        static Graph *fromFile(const QString &path, const char *mimeType = "text/turtle", librdf_uri *baseUri = rdf::baseUri, QObject *parent = 0);

        void contextChanged();
        rdf::Node getContext();

        void saveFile();
        void saveFileAs();

        rdf::Node context_;
        QHash<QString, QString> nshash_;
        raptor_namespace_stack *nstack_;
        QString file_;
        Lens *lens_;
        QHash<uint, QPointF> loadedNodePositions_;

    private:
        //QSet<librdf_node *> node_ids_;
        QHash<rdf::Node, GraphNode *> nodes_;
        QHash<rdf::Statement, GraphEdge *> edges_;
};

#endif
