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

        if(0 != librdf_storage_context_add_statements(storage, *contextNode, stream)) { 
            throw ModelAccessException(); 
        }

        librdf_free_stream(stream);
        return contextNode;
    }

    void printContext(librdf_node *context)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        Serializer serializer (world, NULL, "application/turtle", NULL);

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, stdout, NULL, stream)) {
            throw SerializationException();
        }

        librdf_free_stream(stream);
    }

    void freeContext(librdf_node *context)
    {
        if(0 != librdf_model_context_remove_statements(model, context)) throw ModelAccessException();
    }

    const char *serializeNode(librdf_node *node)
    {
        URI base_uri (world, (unsigned char*)"http://exampe.org/base.rdf");
       
        Model tmodel (model);

        Node tnode (world, (unsigned char*)"x:");

        if(0 != librdf_model_add(tmodel, tnode, tnode, node)) {
            throw ModelAccessException();
        }

        unsigned char *str = librdf_model_to_string(tmodel, base_uri, "ntriples", NULL, NULL);
        if(NULL == str) {
            throw SerializationException();
        }
        return reinterpret_cast<const char *>(str);
    }
}

