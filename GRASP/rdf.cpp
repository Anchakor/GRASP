#include "rdf.h"
#include "persistentcounter.h"

namespace rdf
{
    librdf_world *world;
    librdf_storage *storage;
    librdf_model *model;
    raptor_world *raptor;
    librdf_uri *baseUri;

    QSet<Node *> contexts;

    void saveGraphToFile(librdf_node *context, FILE *file)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        Serializer serializer (world, NULL, "text/turtle", NULL);

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, file, baseUri, stream)) {
            throw SerializationException();
        }

        librdf_free_stream(stream);
    }

    void printContext(librdf_node *context)
    {
        librdf_stream *stream = librdf_model_context_as_stream(model, context);
        if(NULL == stream) throw StreamConstructException();

        Serializer serializer (world, NULL, "text/turtle", NULL);

        if(0 != librdf_serializer_serialize_stream_to_file_handle(serializer, stdout, baseUri, stream)) {
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
        return reinterpret_cast<char *>(librdf_node_to_string(p));
    }

    QString Node::toQString() const
    {
        char *s = serialize();
        QString str = QString::fromLocal8Bit(s);
        free(s);
        return str;
    }

    QString Node::toQString(raptor_namespace_stack *nstack) const
    {
        char *s = reinterpret_cast<char *>(raptor_term_to_turtle_string(p, nstack, baseUri));
        QString str = QString::fromLocal8Bit(s);
        free(s);
        return str;
    }

    char *Statement::serialize() const
    {
        QString s;
        Node n;
        n = librdf_statement_get_subject(p);
        s.append(n.toQString());
        s.append(" ");
        n = librdf_statement_get_predicate(p);
        s.append(n.toQString());
        s.append(" ");
        n = librdf_statement_get_object(p);
        s.append(n.toQString());
        s.append(" . \n");
        return qstrdup(s.toLatin1().constData());
    }

    raptor_namespace_stack *getParsedNamespaces(librdf_parser *parser, NSHash *nshash) {
        int namespaces = librdf_parser_get_namespaces_seen_count(parser);
        if(namespaces < 1) return NULL;

        raptor_namespace_stack *nstack = raptor_new_namespaces(raptor, 2);
        if(NULL == nstack) return NULL;

        for(int i = 0; i < namespaces; i++) {
            const unsigned char *prefix = reinterpret_cast<const unsigned char *>(librdf_parser_get_namespaces_seen_prefix(parser, i));
            librdf_uri* uri = librdf_parser_get_namespaces_seen_uri(parser, i);
            if(NULL == prefix || NULL == uri) return NULL;
            unsigned char *uric = librdf_uri_to_string(uri);

            if(NULL != nshash) nshash->insert(QString((const char *)prefix), QString((const char *)uric));

            raptor_namespace *ns = raptor_new_namespace(nstack, prefix, uric, 0);
            if(NULL == ns) return NULL;
            raptor_namespaces_start_namespace(nstack, ns);
            free(uric);
        }

        return nstack;
    }

    void addOrReplaceStatement(librdf_node *context, librdf_statement *replacement, librdf_statement *statement) {
        //printf("AoRS %s\t%s\t%s\n", librdf_node_to_string(context), librdf_statement_to_string(replacement), librdf_statement_to_string(statement));
        if(statement) {
            if(0 != librdf_model_context_remove_statement(model, context, statement))
                throw ModelAccessException();
        }
        if(0 != librdf_model_context_add_statement(model, context, replacement))
            throw ModelAccessException();
    }

    void removeStatement(librdf_node *context, librdf_statement *statement) {
        if(0 != librdf_model_context_remove_statement(model, context, statement))
            throw ModelAccessException();
    }

    void replaceOrDeleteNode(librdf_node *context, librdf_node *node, librdf_node *replacement) {
        librdf_stream *stream;
        librdf_statement *statement;
        librdf_statement *streamstatement;
        librdf_statement *newstatement;
        librdf_node *n;

        if(replacement && librdf_node_equals(node, replacement)) return;

        // processing subject positions
        statement = librdf_new_statement_from_nodes(world, librdf_new_node_from_node(node), NULL, NULL);
        stream = librdf_model_find_statements_in_context(model, statement, context);
        if(NULL == stream) throw ModelAccessException();

        while(!librdf_stream_end(stream)) {
            streamstatement = librdf_stream_get_object(stream);

            if(replacement) {
                newstatement = librdf_new_statement_from_statement(streamstatement);
                n = librdf_new_node_from_node(replacement);
                librdf_statement_set_subject(newstatement, n);
                if(0 != librdf_model_context_add_statement(model, context, newstatement))
                    throw ModelAccessException();
            }
            if(0 != librdf_model_context_remove_statement(model, context, streamstatement))
                throw ModelAccessException();

            librdf_stream_next(stream);
        }
        librdf_free_statement(statement);
        librdf_free_stream(stream);

        // same for object positions
        statement = librdf_new_statement_from_nodes(world, NULL, NULL, librdf_new_node_from_node(node));
        stream = librdf_model_find_statements_in_context(model, statement, context);
        if(NULL == stream) throw ModelAccessException();

        while(!librdf_stream_end(stream)) {
            streamstatement = librdf_stream_get_object(stream);

            if(replacement) {
                newstatement = librdf_new_statement_from_statement(streamstatement);
                n = librdf_new_node_from_node(replacement);
                librdf_statement_set_object(newstatement, n);
                if(0 != librdf_model_context_add_statement(model, context, newstatement))
                    throw ModelAccessException();
            }
            if(0 != librdf_model_context_remove_statement(model, context, streamstatement))
                throw ModelAccessException();

            librdf_stream_next(stream);
        }
        librdf_free_statement(statement);
        librdf_free_stream(stream);
    }

    QList<Node> *getNodeClasses(librdf_node *context, librdf_node *node)
    {
        QList<Node> *list = new QList<Node>();
        rdf::Node type (RDFURIPREFIX"type");
        Statement s (world, node, type, NULL);
        librdf_stream *stream;
        librdf_statement *streamstatement;

        stream = librdf_model_find_statements_in_context(model, s, context);
        if(NULL == stream) throw ModelAccessException();

        while(!librdf_stream_end(stream)) {
            streamstatement = librdf_stream_get_object(stream);

            list->append(Node(librdf_statement_get_object(streamstatement)));

            librdf_stream_next(stream);
        }
        librdf_free_stream(stream);
        return list;
    }

}
