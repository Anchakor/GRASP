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

    QString storageConfString("hash-type='bdb',dir='.',contexts='yes'");
    if(!QFile::exists(QString("maindb-contexts.db"))) storageConfString.prepend("new='yes',");
    rdf::storage = librdf_new_storage(rdf::world, "hashes", "maindb", storageConfString.toLatin1().constData());
    if(NULL == rdf::storage) {
        fprintf(stderr, "Failed to create rdf::storage\n");
        return(1);
    }

    rdf::model = librdf_new_model(rdf::world, rdf::storage, LIBRDF_MODEL_FEATURE_CONTEXTS);
    if(NULL == rdf::model) {
        fprintf(stderr, "Failed to create rdf::model\n");
        return(1);
    }


    QApplication a(argc, argv);
    MainWindow w;
#if defined(Q_WS_S60)
    w.showMaximized();
#else
    w.show();
#endif
    ret = a.exec();

    librdf_free_model(rdf::model);
    librdf_free_storage(rdf::storage);
    librdf_free_world(rdf::world);

    return ret;
}
