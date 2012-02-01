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
        ~Graph();
        void init();

        static Graph *fromFile(const QString &path, const char *mimeType = "text/turtle", librdf_uri *baseUri = rdf::baseUri, QObject *parent = 0);
        static Graph *fromURI(const QString &uri, const char *mimeType = "text/turtle", librdf_uri *baseUri = rdf::baseUri, QObject *parent = 0);
        static Graph *newEmpty(QObject *parent = 0);

        void contextChanged();
        rdf::Node getContext();

        void saveFile();
        void saveFileAs();

        rdf::Node context_;
        QHash<QString, QString> nshash_;
        raptor_namespace_stack *nstack_;
        QString file_;
        Lens lens_;
        QHash<uint, QPointF> loadedNodePositions_;
        QHash<rdf::Node, GraphNode *> nodes_;
        QHash<rdf::Statement, GraphEdge *> edges_;

    protected:
        virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
};

#endif
