#include <QtGui/QApplication>
#include <QtCore>
#include "mainwindow.h"
#include "persistentcounter.h"

#define PERSCOUNTERPATH "maindb-counter"

namespace rdf
{
    librdf_world *world;
    librdf_storage *storage;
    librdf_model *model;
    librdf_stream *stream;
    raptor_world *raptor;
    raptor_iostream *iostr;
}

int main(int argc, char *argv[])
{
    rdf::world = librdf_new_world();
    if(!rdf::world) {
        fprintf(stderr, "Failed to create rdf::world\n");
        return(1);
    }
    librdf_world_open(rdf::world);

    QString storageConfString("hash-type='bdb',dir='.',contexts='yes'");
    if(!QFile::exists("maindb-contexts.db")) storageConfString.prepend("new='yes',");
    rdf::storage = librdf_new_storage(rdf::world, "hashes", "maindb", storageConfString.toLatin1().constData());
    if(!rdf::storage) {
        fprintf(stderr, "Failed to create rdf::storage\n");
        return(1);
    }

    rdf::model = librdf_new_model(rdf::world, rdf::storage, LIBRDF_MODEL_FEATURE_CONTEXTS);
    if(!rdf::model) {
        fprintf(stderr, "Failed to create rdf::model\n");
        return(1);
    }

 /*   librdf_node* s = librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/");
    if(!s) fprintf(stderr, "Failed to make example node\n");
    librdf_node* p = librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/");
    librdf_node* o = librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/");
    librdf_node* g = librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/");
    librdf_statement *t = librdf_new_statement_from_nodes(rdf::world, s, p, o);
    if(!t) fprintf(stderr, "Failed to make example triple\n");
    //if(!librdf_model_context_add_statement(rdf::model, g, t)) fprintf(stderr, "Failed to add test triple\n");
    //if(!librdf_model_add(rdf::model, s, p, o)) fprintf(stderr, "Failed to add test triple\n");
    if(0 != librdf_model_context_add_statement(rdf::model, librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/"), 
               librdf_new_statement_from_nodes(rdf::world, 
                   librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/"), 
                   librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/"), 
                   librdf_new_node_from_uri_string(rdf::world, (unsigned char const *)"http://example.com/")))) fprintf(stderr, "Failed to add test triple\n");
*/
    //PersistentCounter pc;
    //pc.init(QString(PERSCOUNTERPATH));
    //return pc.increment();
    //printf("%li\n", PersistentCounter::increment(PERSCOUNTERPATH));
    printf("%li\n", PersistentCounter::increment(PERSCOUNTERPATH));
    printf("%li\n", PersistentCounter::increment(PERSCOUNTERPATH));



    QApplication a(argc, argv);
    MainWindow w;
#if defined(Q_WS_S60)
    w.showMaximized();
#else
    w.show();
#endif
    int ret = a.exec();

    librdf_free_model(rdf::model);
    librdf_free_storage(rdf::storage);
    librdf_free_world(rdf::world);
    return ret;
}
