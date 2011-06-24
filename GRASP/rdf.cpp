#include "rdf.h"
#include "persistentcounter.h"

namespace rdf
{
    librdf_world *world;
    librdf_storage *storage;
    librdf_model *model;
    raptor_world *raptor;
    raptor_iostream *iostr;

    QSet<librdf_node *> contexts;

    librdf_node *loadGraphFromFile(const QString & path, const char *mimeType, librdf_uri *baseUri) 
    {
        librdf_parser *parser;
        parser = librdf_new_parser(world, NULL, mimeType, NULL);
        if(NULL == parser) throw ParserConstructException();

        QFile file(path);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) throw FileOpenException();

        librdf_stream *stream;
        stream = librdf_parser_parse_string_as_stream(parser, (const unsigned char *)(file.readAll().constData()), baseUri);
        if(NULL == stream) { 
            librdf_free_parser(parser);
            throw ParsingException();
        }

        QString s(GRASPURIPREFIX);
        s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
        librdf_uri *contextURI = librdf_new_uri(world, (const unsigned char *)s.toLatin1().constData());
        if(NULL == contextURI) { 
            librdf_free_stream(stream);
            librdf_free_parser(parser);
            throw URIConstructException();
        }

        librdf_node *contextNode = librdf_new_node_from_uri(world, contextURI);
        if(NULL == contextNode) { 
            librdf_free_uri(contextURI);
            librdf_free_stream(stream);
            librdf_free_parser(parser);
            throw NodeConstructException();
        }

        if(0 != librdf_storage_context_add_statements(storage, contextNode, stream)) { 
            librdf_free_node(contextNode);
            librdf_free_uri(contextURI);
            librdf_free_stream(stream);
            librdf_free_parser(parser);
            throw ModelAccessException();
        }

        librdf_free_uri(contextURI);
        librdf_free_stream(stream);
        librdf_free_parser(parser);

        return contextNode;
    }

    librdf_node *loadGraphFromURI(const QString & uri, const char *mimeType, librdf_uri *baseUri) 
    {
        librdf_parser *parser;
        parser = librdf_new_parser(world, NULL, mimeType, NULL);
        if(NULL == parser) throw ParserConstructException();

        librdf_uri *lURI = librdf_new_uri(world, (const unsigned char *)uri.toLatin1().constData());
        if(NULL == lURI) {
            librdf_free_parser(parser);
            throw URIConstructException();
        }

        librdf_stream *stream;
        stream = librdf_parser_parse_as_stream(parser, lURI, baseUri);
        if(NULL == stream) { 
            librdf_free_uri(lURI);
            librdf_free_parser(parser);
            throw ParsingException();
        }

        QString s(GRASPURIPREFIX);
        s.append(QString::number(PersistentCounter::increment(PERSCOUNTERPATH)));
        librdf_uri *contextURI = librdf_new_uri(world, (const unsigned char *)s.toLatin1().constData());
        if(NULL == contextURI) {
            librdf_free_stream(stream);
            librdf_free_uri(lURI);
            librdf_free_parser(parser);
            throw URIConstructException();
        }

        librdf_node *contextNode = librdf_new_node_from_uri(world, contextURI);
        if(NULL == contextNode) { 
            librdf_free_uri(contextURI);
            librdf_free_stream(stream);
            librdf_free_uri(lURI);
            librdf_free_parser(parser);
            throw NodeConstructException();
        }

        if(0 != librdf_storage_context_add_statements(storage, contextNode, stream)) { 
            librdf_free_node(contextNode);
            librdf_free_uri(contextURI);
            librdf_free_stream(stream);
            librdf_free_uri(lURI);
            librdf_free_parser(parser); 
            throw ModelAccessException(); 
        }

        librdf_free_uri(contextURI);
        librdf_free_stream(stream);
        librdf_free_uri(lURI);
        librdf_free_parser(parser);

        return contextNode;
    }

    void printContext(librdf_node *context)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        librdf_serializer *serializer = librdf_new_serializer(world, NULL, "application/turtle", NULL);
        if(NULL == serializer) {
            librdf_free_stream(stream);
            throw SerializerConstructException();
        }

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, stdout, NULL, stream)) {
            fprintf(stderr, "%s/n", "Error: printContext(): serialization error");
        }

        librdf_free_serializer(serializer);
        librdf_free_stream(stream);
    }

    void freeContext(librdf_node *context)
    {
        if(0 != librdf_model_context_remove_statements(model, context)) throw ModelAccessException();
    }

    const char *serializeNode(const librdf_node *node)
    {
        librdf_serializer *serializer = librdf_new_serializer(world, "ntriples", NULL, NULL);
        if(NULL == serializer) throw SerializerConstructException();

        librdf_uri *base_uri=librdf_new_uri(world, (const unsigned char*)"http://exampe.org/base.rdf");
        if(NULL == base_uri) {
            librdf_new_serializer(serializer);
            throw URIConstructException();
        }
       
        librdf_model* tmodel = librdf_new_model_from_model(model);
        if(NLL == tmodel) {
            librdf_free_serializer(serializer);
            librdf_free_uri(base_uri);
            throw ModelConstructException();
        }

        librdf_node* tnode = librdf_new_node_from_uri_string(world, (const unsigned char*)"x:");


        size_t len;
        //unsigned char *str = librdf_serializer_serialize_stream_to_counted_string(serializer, base_uri, stream, &len);
        librdf_free_serializer(serializer);
        librdf_free_uri(base_uri);
        //return reinterpret_cast<const char *>(str);
    }

}

