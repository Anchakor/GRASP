#ifndef RDF_H
#define RDF_H

#include <QtCore>
#include <librdf.h>
#include <exception>
#include <algorithm>

#define PERSCOUNTERPATH "maindb-counter"
#define GRASPURIPREFIX "urn:grasp:"
#define RDFURIPREFIX "http://www.w3.org/1999/02/22-rdf-syntax-ns#"
#define OWLURIPREFIX "http://www.w3.org/2002/07/owl#"
#define LENSURIPREFIX "http://mud.cz/sw/ed#lens/"
#define TEMPLATESURIPREFIX "http://mud.cz/sw/ed#templates/"

namespace rdf
{
    extern librdf_world *world;
    extern librdf_storage *storage;
    extern librdf_model *model;
    extern raptor_world *raptor;
    extern librdf_uri *baseUri;

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
        Node() {
            p = librdf_new_node(world);
            init();
        }
        Node(const char *str) {
            p = librdf_new_node_from_uri_string(world, (unsigned char *)str);
            init();
        }
        Node(librdf_world *world) { 
            p = librdf_new_node(world); 
            init(); 
        }
        Node(librdf_world *world, unsigned char *identifier) { 
            p = librdf_new_node_from_blank_identifier(world, identifier); 
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
        Node(const Node &node) {
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
        operator librdf_node*() const { return p; }
        Node &operator=(const Node &other) {
            if(*this != other) {
                librdf_free_node(p);
                p = librdf_new_node_from_node(other.p);
            }
            return *this;
        }
        bool operator==(const Node &other) const {
            return librdf_node_equals(p, other.p);
        }
        bool operator!=(const Node &other) const { return !(*this == other); }
        ~Node() { librdf_free_node(p); }
        char *serialize(raptor_namespace_stack *nstack = NULL) const; // needs to be delete[]d
        QString toQString(raptor_namespace_stack *nstack = NULL) const;
    };
    inline uint qHash(const Node &key)
    {
        uint out = qHash(key.toQString());
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
        Statement() {
            p = librdf_new_statement(world);
            init();
        }
        Statement(librdf_world *world) { 
            p = librdf_new_statement(world);
            init();
        }
        //TODO delete this when redland 1.0.15 comes out
        static librdf_statement*
        new_statement_from_statement(librdf_statement* statement)
        {
          raptor_term *subject = NULL;
          raptor_term *predicate = NULL;
          raptor_term *object = NULL;
          raptor_term *graph = NULL;

          if(!statement)
            return NULL;

          subject = raptor_term_copy(statement->subject);
          if(statement->subject && !subject)
            goto err;

          predicate = raptor_term_copy(statement->predicate);
          if(statement->predicate && !predicate)
            goto err;

          object = raptor_term_copy(statement->object);
          if(statement->object && !object)
            goto err;

          graph = raptor_term_copy(statement->graph);
          if(statement->graph && !graph)
            goto err;

          return raptor_new_statement_from_nodes(statement->world, subject, predicate, object, graph);

         err:
          if(graph)
            raptor_free_term(graph);
          if(object)
            raptor_free_term(object);
          if(predicate)
            raptor_free_term(predicate);
          if(subject)
            raptor_free_term(subject);
          return NULL;
        }
        Statement(const Statement &statement) {
            //TODO use this when redland 1.0.15 comes out
            //p = librdf_new_statement_from_statement(statement.p);
            p = Statement::new_statement_from_statement(statement.p);
            init();
        }
        Statement(librdf_statement *statement) {
            //TODO use this when redland 1.0.15 comes out
            //p = librdf_new_statement_from_statement(statement);
            p = Statement::new_statement_from_statement(statement);
            init();
        }
        Statement(librdf_world *world, librdf_node *subject, librdf_node *predicate, librdf_node *object) { 
            p = librdf_new_statement_from_nodes(world, subject, predicate, object);
            init();
        }
        operator librdf_statement*() const { return p; }
        Statement &operator=(const Statement &other) {
            if(*this != other) {
                librdf_free_statement(p);
                //TODO use this when redland 1.0.15 comes out
                //p = librdf_new_statement_from_statement(other.p);
                p = Statement::new_statement_from_statement(other.p);
            }
            return *this;
        }
        bool operator==(const Statement &other) const {
            return librdf_statement_equals(p, other.p);
        }
        ~Statement() { librdf_free_statement(p); }
        char *serialize(raptor_namespace_stack *nstack = NULL) const; // needs to be delete[]d
        QString toQString(raptor_namespace_stack *nstack = NULL) const;
    };
    inline uint qHash(const Statement &key)
    {
        uint out = qHash(key.toQString());
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
        NamespaceStack() {
            p = raptor_new_namespaces(raptor, 2);
            init();
        }
        NamespaceStack(raptor_world *world, int defaults) {
            p = raptor_new_namespaces(world, defaults);
            init();
        }
        operator raptor_namespace_stack*() const { return p; }
        ~NamespaceStack() { raptor_free_namespaces(p); }
    };


    extern QSet<Node *> contexts;

    typedef QList<QPair<QString, QString> > NSHash; // prefix -> uri

#define NODEPOSITIONCOMMENTPREFIX "#&&&NodePosition"
#define LENSCOMMENTPREFIX "#&&&Lens"
    void saveGraphToFile(librdf_node *context, FILE *file);
    void printContext(librdf_node *context);
    void freeContext(librdf_node *context);
    raptor_namespace_stack *getParsedNamespaces(librdf_parser *parser, NSHash *nslist = NULL);
    raptor_namespace_stack *getNamespaces(NSHash *nslist, int defaults = 0);
    void addOrReplaceStatement(librdf_node *context, librdf_statement *replacement, librdf_statement *statement = NULL);
    void removeStatement(librdf_node *context, librdf_statement *statement);
    void replaceOrDeleteNode(librdf_node *context, librdf_node *node, librdf_node *replacement = NULL);
    QList<Node> *getNodeClasses(librdf_node *context, librdf_node *node);

}


#endif //IG
