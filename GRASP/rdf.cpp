#include "rdf.h"
#include "persistentcounter.h"

namespace rdf
{
    librdf_world *world;
    librdf_storage *storage;
    librdf_model *model;
    raptor_world *raptor;
    raptor_iostream *iostr;

    QSet<Node *> contexts;

    Node *loadGraphFromFile(const QString & path, const char *mimeType, librdf_uri *baseUri) 
    {
        Parser parser (world, NULL, mimeType, NULL);

        QFile file(path);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) throw FileOpenException();

        librdf_stream *stream = librdf_parser_parse_string_as_stream(parser, (const unsigned char *)(file.readAll().constData()), baseUri);
        if(NULL == stream) { 
            throw ParsingException();
        }

        QString s(GRASPURIPREFIX);
        s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
        URI contextURI (world, (unsigned char *)s.toLatin1().constData());

        Node *contextNode = new Node(world, contextURI);
        contexts.insert(contextNode);

        if(0 != librdf_storage_context_add_statements(storage, *contextNode, stream)) { 
            throw ModelAccessException();
        }

        librdf_free_stream(stream);
        return contextNode;
    }

    Node *loadGraphFromURI(const QString & uri, const char *mimeType, librdf_uri *baseUri) 
    {
        Parser parser (world, NULL, mimeType, NULL);

        URI lURI (world, (unsigned char *)uri.toLatin1().constData());

        librdf_stream *stream = librdf_parser_parse_as_stream(parser, lURI, baseUri);
        if(NULL == stream) { 
            throw ParsingException();
        }

        QString s(GRASPURIPREFIX);
        s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
        URI contextURI (world, (unsigned char *)s.toLatin1().constData());

        Node *contextNode = new Node(world, contextURI);
        contexts.insert(contextNode);

        if(0 != librdf_storage_context_add_statements(storage, *contextNode, stream)) { 
            throw ModelAccessException(); 
        }

        librdf_free_stream(stream);
        return contextNode;
    }

    void saveGraphToFile(librdf_node *context, FILE *file)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        Serializer serializer (world, NULL, "text/turtle", NULL);

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, file, NULL, stream)) {
            throw SerializationException();
        }

        librdf_free_stream(stream);
    }

    void printContext(librdf_node *context)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        Serializer serializer (world, NULL, "text/turtle", NULL);

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, stdout, NULL, stream)) {
            throw SerializationException();
        }

        librdf_free_stream(stream);
    }

    void freeContext(librdf_node *context)
    {
        if(0 != librdf_model_context_remove_statements(model, context)) throw ModelAccessException();
    }

    char *Node::serialize() const
    {
        return reinterpret_cast<char *>(raptor_term_to_turtle_string(p, NULL, NULL));
        //return reinterpret_cast<char *>(librdf_node_to_string(p));
    }

    char *Statement::serialize() const
    {
        QString s;
        librdf_node *n;
        n = librdf_statement_get_subject(p);
        char *str = reinterpret_cast<char *>(raptor_term_to_turtle_string(n, NULL, NULL));
        s.append(const_cast<const char *>(str));
        free(str);
        s.append(" ");
        n = librdf_statement_get_predicate(p);
        str = reinterpret_cast<char *>(raptor_term_to_turtle_string(n, NULL, NULL));
        s.append(const_cast<const char *>(str));
        free(str);
        s.append(" ");
        n = librdf_statement_get_object(p);
        str = reinterpret_cast<char *>(raptor_term_to_turtle_string(n, NULL, NULL));
        s.append(const_cast<const char *>(str));
        free(str);
        s.append(" . \n");
        return qstrdup(s.toLatin1().constData());
    }
}

