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

    struct NodeConstructException : public std::exception {};
    struct StreamConstructException : public std::exception {};
    struct StatementConstructException : public std::exception {};
    struct ParserConstructException : public std::exception {};
    struct SerializerConstructException : public std::exception {};
    struct URIConstructException : public std::exception {};
    struct ParsingException : public std::exception {};
    struct FileOpenException : public std::exception {};
    struct ModelAccessException : public std::exception {};
    struct ModelConstructException : public std::exception {};

    librdf_node *loadGraphFromFile(const QString & path, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    librdf_node *loadGraphFromURI(const QString & uri, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    void printContext(librdf_node *context);
    void freeContext(librdf_node *context);

    class Model
    {
        librdf_model *p;
      public:
        void init() {
            if(NULL == p) { throw ModelConstructException(); }
        }
        Model(librdf_world *world, librdf_storage *storage, const char *options_string) { 
            p = librdf_new_model(world, storage, options_string);
            init();
        }
        Model(librdf_world *world, librdf_storage *storage, librdf_hash *options) { 
            p = librdf_new_model_with_options(world, storage, options);
            init();
        }
        Model(librdf_model *model) { 
            p = librdf_new_model_from_model(model);
            init();
        }
        ~Model() { librdf_free_model(); }
        operator World*() { return p; }
    };

    class Node
    {
        librdf_node *p;
      public:
        void init() {
            if(NULL == p) { throw NodeConstructException(); }
        }
        Node(librdf_world *world) { 
            p = librdf_new_node(world); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *identifier) { 
            p = librdf_new_node_from_blank_identifier(world, identifier); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *identifier, size_t identifier_len) { 
            p = librdf_new_node_from_counted_blank_identifier(world, identifier, identifier_len); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *uri_string, size_t len) { 
            p = librdf_new_node_from_counted_uri_string(world, uri_string, len); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *string, const char *xml_language, int is_wf_xml) { 
            p = librdf_new_node_from_literal(world, string, xml_language, is_wf_xml); 
            init(); 
        }
        Node(librdf_node *node) { 
            p = librdf_new_node_from_node(node); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *uri_string, librdf_uri *source_uri, librdf_uri *base_uri) { 
            p = librdf_new_node_from_normalised_uri_string(world, uri_string, source_uri, base_uri); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *value, size_t value_len, const char *xml_language, size_t xml_language_len, librdf_uri *datatype_uri) { 
            p = librdf_new_node_from_typed_counted_literal(world, value, value_len, xml_language, xml_language_len, datatype_uri); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *value, const char *xml_language, librdf_uri *datatype_uri) { 
            p = librdf_new_node_from_typed_literal(world, value, xml_language, datatype_uri); 
            init(); 
        }
        Node(librdf_world *world, librdf_uri *uri) { 
            p = librdf_new_node_from_uri(world, uri); 
            init(); 
        }
        Node(librdf_world *world, librdf_uri *uri, unsigned char *local_name) { 
            p = librdf_new_node_from_uri_local_name(world, uri, local_name); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *uri_string) { 
            p = librdf_new_node_from_uri_string(world, uri_string); 
            init(); 
        }
        bool operator==(const Node &other) const {
            return (librdf_node_equals(p, *other) == 0)? true : false;      
        }
        ~Node() { librdf_free_node(p); }
        operator Node*() { return p; }
    };

    class Statement
    {
        librdf_statement *p;
      public:
        void init() {
            if(NULL == p) { throw StatementConstructException(); }
        }
        Statement(librdf_world *world) { 
            p = librdf_new_statement(world);
            init();
        }
        Statement(librdf_statement *statement) { 
            p = librdf_new_statement_from_statement(statement);
            init();
        }
        Statement(librdf_world *world, librdf_node *subject, librdf_node *predicate, librdf_node *object) { 
            p = librdf_new_statement_from_nodes(world, subject, predicate, object);
            init();
        }
        bool operator==(const Statement &other) const {
            return (librdf_statement_equals(p, *other) == 0)? true : false;      
        }
        ~Statement() { librdf_free_statement(p); }
    };

    class Stream
    {
        librdf_stream *p;
      public:
        void init() {
            if(NULL == p) { throw StreamConstructException(); }
        }
        Stream(librdf_iterator *iterator, librdf_statement *statement, librdf_statement_part field) { 
            p = librdf_new_stream_from_node_iterator (iterator, statement, field); 
            init();
        }
        Stream(librdf_world *world) { 
            p = librdf_new_empty_stream(world); 
            init();
        }
        ~Stream() { librdf_free_stream(p); }
    };

    class URI
    {
        librdf_uri *p;
      public:
        void init() {
            if(NULL == p) { throw URIConstructException(); }
        }
        URI(librdf_world *world, unsigned char *uri_string) { 
            p = librdf_new_uri(world, uri_string);
            init();
        }
        (librdf_world *world, unsigned char *uri_string, size_t length) { 
            p = librdf_new_uri2(world, uri_string, length);
            init();
        }
        (librdf_uri *old_uri) { 
            librdf_new_uri_from_uri(old_uri);
            init();
        }
        (librdf_uri *old_uri, unsigned char *local_name) { 
            p = librdf_new_uri_from_uri_local_name(old_uri, local_name);
            init();
        }
        ~URI() { librdf_free_uri(p); }
    };

    class Parser
    {
        librdf_parser *p;
      public:
        void init() {
            if(NULL == p) { throw ParserConstructException(); }
        }
        Parser(librdf_world *world, const char *name, const char *mime_type, librdf_uri *type_uri) { 
            p = librdf_new_parser(world, name, mime_type, type_uri);
            init();
        }
        ~Parser() { librdf_free_parser(p); }
    };

    class Serializer
    {
        librdf_serializer *p;
      public:
        void init() {
            if(NULL == p) { throw SerializerConstructException(); }
        }
        Serializer(librdf_world *world, const char *name, const char *mime_type, librdf_uri *type_uri) { 
            p = librdf_new_serializer(world, name, mime_type, type_uri);
            init();
        }
        ~Serializer() { librdf_free_serializer(p); }
    };


}

inline uint qHash(const rdf::Node &key) { return qHash(key.node_); }
inline uint qHash(const rdf::Statement &key) { return qHash(key.statement_); }


#endif //IG
