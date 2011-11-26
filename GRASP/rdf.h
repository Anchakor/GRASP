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
    struct SerializationException : public std::exception {};
    struct StorageConstructException : public std::exception {};
    struct NamespaceConstructException : public std::exception {};
    struct NamespaceStackConstructException : public std::exception {};

    class Storage
    {
      private:
        librdf_storage *p;
        void init() {
            if(NULL == p) { throw StorageConstructException(); }
        }
      public:
        Storage(librdf_world *world, const char *storage_name = "memory", const char *name = NULL, const char *options_string = NULL) {
            p = librdf_new_storage(world, storage_name, name, options_string);
            init();
        }
        ~Storage() { librdf_free_storage(p); }
        operator librdf_storage*() { return p; }
    };

    class Model
    {
      private:
        librdf_model *p;
        void init() {
            if(NULL == p) { throw ModelConstructException(); }
        }
      public:
        Model(librdf_world *world, librdf_storage *storage, const char *options_string = NULL) { 
            p = librdf_new_model(world, storage, options_string);
            init();
        }
        Model(librdf_world *world, librdf_storage *storage, librdf_hash *options) { 
            p = librdf_new_model_with_options(world, storage, options);
            init();
        }
        Model(Model &model) { 
            p = librdf_new_model_from_model(model.p);
            init();
        }
        Model(librdf_model *model) { 
            p = librdf_new_model_from_model(model);
            init();
        }
        ~Model() { librdf_free_model(p); }
        operator librdf_model*() { return p; }
    };

    class Node
    {
      private:
        librdf_node *p;
        void init() {
            if(NULL == p) { throw NodeConstructException(); }
        }
      public:
        Node(librdf_world *world) { 
            p = librdf_new_node(world); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *identifier) { 
            p = librdf_new_node_from_blank_identifier(world, identifier); 
            init(); 
        }
     /*   Node(librdf_world *world, unsigned char *identifier, size_t identifier_len) { 
            p = librdf_new_node_from_counted_blank_identifier(world, identifier, identifier_len); 
            init(); 
        } */
        Node(librdf_world *world, unsigned char *uri_string, size_t len) { 
            p = librdf_new_node_from_counted_uri_string(world, uri_string, len); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *string, const char *xml_language, int is_wf_xml) { 
            p = librdf_new_node_from_literal(world, string, xml_language, is_wf_xml); 
            init(); 
        }
        Node(Node &node) { 
            p = librdf_new_node_from_node(node.p); 
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
     /*   Node(librdf_world *world, unsigned char *uri_string) { 
            p = librdf_new_node_from_uri_string(world, uri_string); 
            init(); 
        }*/
        operator librdf_node*() const { return p; }
        bool operator==(const Node &other) const {
            /* this function didn't work as expected: */
            return librdf_node_equals(p, other.p);
            /*QString s1 (serialize());
            QString s2 (other.serialize());
            printf("CMP TEST: 1: %s 2: %s 3: %d\n", s1.toLatin1().constData(), s2.toLatin1().constData(), librdf_node_equals(p, other.p));
            return s1 == s2;*/
        }
        ~Node() { librdf_free_node(p); }
        char *serialize() const; // needs to be delete[]d
    };
    inline uint qHash(const Node &key)
    {
        char *str = key.serialize();
        uint out = qHash(QString(const_cast<const char *>(str)));
        free(str);
        return out;
    }

    class Statement
    {
      private:
        librdf_statement *p;
        void init() {
            if(NULL == p) { throw StatementConstructException(); }
        }
      public:
        Statement(librdf_world *world) { 
            p = librdf_new_statement(world);
            init();
        }
        Statement(Statement &statement) { 
            p = librdf_new_statement_from_statement(statement.p);
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
        operator librdf_statement*() const { return p; }
        bool operator==(const Statement &other) const {
            return librdf_statement_equals(p, other.p);      
        }
        ~Statement() { librdf_free_statement(p); }
        char *serialize() const; // needs to be delete[]d
    };
    inline uint qHash(const Statement &key)
    {
        char *str = key.serialize();
        //printf("DEBUG stat ser: %s\n", const_cast<const char *>(str));
        uint out = qHash(QString(const_cast<const char *>(str)));
        delete[] str;
        return out;
    }

    class Stream
    {
      private:
        librdf_stream *p;
        void init() {
            if(NULL == p) { throw StreamConstructException(); }
        }
      public:
        Stream(librdf_iterator *iterator, librdf_statement *statement, librdf_statement_part field) { 
            p = librdf_new_stream_from_node_iterator (iterator, statement, field); 
            init();
        }
        Stream(librdf_world *world) { 
            p = librdf_new_empty_stream(world); 
            init();
        }
        operator librdf_stream*() const { return p; }
        ~Stream() { librdf_free_stream(p); }
    };

    class URI
    {
      private:
        librdf_uri *p;
        void init() {
            if(NULL == p) { throw URIConstructException(); }
        }
      public:
        URI(librdf_world *world, unsigned char *uri_string) { 
            p = librdf_new_uri(world, uri_string);
            init();
        }
        URI(librdf_world *world, unsigned char *uri_string, size_t length) { 
            p = librdf_new_uri2(world, uri_string, length);
            init();
        }
        URI(URI &old_uri) { 
            librdf_new_uri_from_uri(old_uri.p);
            init();
        }
        URI(librdf_uri *old_uri) { 
            librdf_new_uri_from_uri(old_uri);
            init();
        }
        URI(librdf_uri *old_uri, unsigned char *local_name) { 
            p = librdf_new_uri_from_uri_local_name(old_uri, local_name);
            init();
        }
        operator librdf_uri*() const { return p; }
        ~URI() { librdf_free_uri(p); }
    };

    class Parser
    {
      private:
        librdf_parser *p;
        void init() {
            if(NULL == p) { throw ParserConstructException(); }
        }
      public:
        Parser(librdf_world *world, const char *name, const char *mime_type, librdf_uri *type_uri) { 
            p = librdf_new_parser(world, name, mime_type, type_uri);
            init();
        }
        operator librdf_parser*() const { return p; }
        ~Parser() { librdf_free_parser(p); }
    };

    class Serializer
    {
      private:
        librdf_serializer *p;
        void init() {
            if(NULL == p) { throw SerializerConstructException(); }
        }
      public:
        Serializer(librdf_world *world, const char *name, const char *mime_type, librdf_uri *type_uri) { 
            p = librdf_new_serializer(world, name, mime_type, type_uri);
            init();
        }
        operator librdf_serializer*() const { return p; }
        ~Serializer() { librdf_free_serializer(p); }
    };

    class Namespace
    {
      private:
        raptor_namespace *p;
        void init() {
            if(NULL == p) { throw NamespaceConstructException(); }
        }
      public:
        Namespace(raptor_namespace_stack *nstack,const unsigned char *prefix,raptor_uri *ns_uri,int depth) {
            p = raptor_new_namespace_from_uri(nstack, prefix, ns_uri, depth);
            init();
        }
        Namespace(raptor_namespace_stack *nstack, const unsigned char *prefix, const unsigned char *ns_uri_string, int depth) {
            p = raptor_new_namespace(nstack, prefix, ns_uri_string, depth);
            init();
        }
        operator raptor_namespace*() const { return p; }
        ~Namespace() { raptor_free_namespace(p); }
    };

    class NamespaceStack
    {
      private:
        raptor_namespace_stack *p;
        void init() {
            if(NULL == p) { throw NamespaceStackConstructException(); }
        }
      public:
        NamespaceStack(raptor_world *world, int defaults) {
            p = raptor_new_namespaces(world, defaults);
            init();
        }
        operator raptor_namespace_stack*() const { return p; }
        ~NamespaceStack() { raptor_free_namespaces(p); }
    };



    Node *loadGraphFromFile(const QString & path, raptor_namespace_stack **nstack, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    Node *loadGraphFromURI(const QString & uri, raptor_namespace_stack **nstack, const char *mimeType = NULL, librdf_uri *baseUri = NULL);
    void saveGraphToFile(librdf_node *context, FILE *file);
    void printContext(librdf_node *context);
    void freeContext(librdf_node *context);
    raptor_namespace_stack *getParsedNamespaces(librdf_parser *parser);
    void addOrReplaceStatement(librdf_node *context, librdf_statement *replacement, librdf_statement *statement = NULL);
    void replaceNode(librdf_node *context, librdf_node *replacement, librdf_node *node);

}


#endif //IG
