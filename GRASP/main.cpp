#include <QtGui/QApplication>
#include <QtCore>
#include <exception>
#include <typeinfo>
#include "rdf.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    int ret;
    rdf::world = librdf_new_world();
    if(NULL == rdf::world) {
        fprintf(stderr, "Failed to create rdf::world\n");
        return(1);
    }
    librdf_world_open(rdf::world);
    rdf::raptor = raptor_new_world();

    QString storageConfString("hash-type='bdb',dir='.',contexts='yes'");
    if(!QFile::exists(QString("maindb-contexts.db"))) storageConfString.prepend("new='yes',");
    rdf::storage = librdf_new_storage(rdf::world, "hashes", "maindb", storageConfString.toLatin1().constData());
    if(NULL == rdf::storage) {
        fprintf(stderr, "Failed to create rdf::storage\n");
        return(1);
    }

    rdf::model = librdf_new_model(rdf::world, rdf::storage, NULL);
    if(NULL == rdf::model) {
        fprintf(stderr, "Failed to create rdf::model\n");
        return(1);
    }

    rdf::baseUri = librdf_new_uri(rdf::world, (unsigned char *)"grasp:baseUri");

    raptor_namespace_stack *nstack;
    rdf::Node *lC = rdf::loadGraphFromFile(QString("../lens.ttl"), &nstack, "text/turtle", rdf::baseUri);
    rdf::lensContext = librdf_new_node_from_node(*lC);
    delete lC;

    QApplication a(argc, argv);
    MainWindow w;
#if defined(Q_WS_S60)
    w.showMaximized();
#else
    w.show();
#endif
    ret = a.exec();

    librdf_free_node(rdf::lensContext);
    raptor_free_namespaces(nstack);
    librdf_free_uri(rdf::baseUri);
    librdf_free_model(rdf::model);
    librdf_free_storage(rdf::storage);
    raptor_free_world(rdf::raptor);
    librdf_free_world(rdf::world);

    return ret;
}
