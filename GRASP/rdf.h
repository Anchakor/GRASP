#ifndef RDF_H
#define RDF_H

#include <QtCore>
#include <librdf.h>
#include <exception>

#define PERSCOUNTERPATH "maindb-counter"
#define GRASPURIPREFIX "grasp:"

namespace rdf
{
    extern librdf_world *world;
    extern librdf_storage *storage;
    extern librdf_model *model;
    extern raptor_world *raptor;
    extern raptor_iostream *iostr;

    extern QList<librdf_node> contexts;

    struct NodeConstructException : public std::exception {};
    struct StreamConstructException : public std::exception {};
    struct ParserConstructException : public std::exception {};
    struct SerializerConstructException : public std::exception {};
    struct URIConstructException : public std::exception {};
    struct FileOpenException : public std::exception {};
    struct ModelAccessException : public std::exception {};
    librdf_node *loadGraphFromFile(const QString & path, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    librdf_node *loadGraphFromURI(const QString & uri, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    void printContext(librdf_node *context);
}



#endif //IG
