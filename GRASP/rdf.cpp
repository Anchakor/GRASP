#include "rdf.h"
#include "persistentcounter.h"

namespace rdf
{
    librdf_world *world;
    librdf_storage *storage;
    librdf_model *model;
    raptor_world *raptor;
    librdf_uri *baseUri;
    librdf_node *lensContext;

    QSet<Node *> contexts;

    Node *loadGraphFromFile(const QString & path, raptor_namespace_stack **nstack, const char *mimeType, librdf_uri *baseUri, QHash<QString, QString> *nshash, QHash<QString, QPointF> *loadedNodePositions)
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

        *nstack = getParsedNamespaces(parser, nshash);

        // load node positions
        file.reset();
        while(!file.atEnd()) {
            QByteArray line = file.readLine();
            if(line.size() < 20) continue;
            QList<QByteArray> lineParts = line.split(' ');
            if(lineParts.size() != 4) continue;
            if(lineParts.at(0) != QString(NODEPOSITIONCOMMENTPREFIX)) continue;
            bool ok = false;
            float x = lineParts.at(2).toFloat(&ok);
            if(!ok) continue;
            QByteArray at3 (lineParts.at(3));
            at3.replace("\n", QByteArray());
            float y = at3.toFloat(&ok);
            if(!ok) continue;
            //printf("NP: %s %f %f\n", lineParts.at(1).constData(), x, y);
            loadedNodePositions->insert(QString(lineParts.at(1)), QPointF(x, y));
        }

        librdf_free_stream(stream);
        return contextNode;
    }

    Node *loadGraphFromURI(const QString & uri, raptor_namespace_stack **nstack, const char *mimeType, librdf_uri *baseUri, QHash<QString, QString> *nshash) 
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

        *nstack = getParsedNamespaces(parser, nshash);

        librdf_free_stream(stream);
        return contextNode;
    }

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
        return reinterpret_cast<char *>(librdf_node_to_string(p));// raptor_term_to_turtle_string(p, NULL, NULL));
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

    raptor_namespace_stack *getParsedNamespaces(librdf_parser *parser, QHash<QString, QString> *nshash) {
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
        //printf("%s\t%s\t%s\n", librdf_node_to_string(context), librdf_statement_to_string(replacement), librdf_statement_to_string(statement));
        if(statement) {
            if(0 != librdf_model_context_remove_statement(model, context, statement))
                throw ModelAccessException();
        }
        if(0 != librdf_model_context_add_statement(model, context, replacement))
            throw ModelAccessException();
    }

    void replaceNode(librdf_node *context, librdf_node *replacement, librdf_node *node) {
        librdf_stream *stream;
        librdf_statement *statement;
        librdf_statement *streamstatement;
        librdf_statement *newstatement;
        librdf_node *n;

        if(librdf_node_equals(node, replacement)) return;

        // processing subject positions
        statement = librdf_new_statement_from_nodes(world, librdf_new_node_from_node(node), NULL, NULL);
        stream = librdf_model_find_statements_in_context(model, statement, context);
        if(NULL == stream) throw ModelAccessException();

        while(!librdf_stream_end(stream)) {
            streamstatement = librdf_stream_get_object(stream);

            newstatement = librdf_new_statement_from_statement(streamstatement);
            n = librdf_new_node_from_node(replacement);
            librdf_statement_set_subject(newstatement, n);
            if(0 != librdf_model_context_add_statement(model, context, newstatement))
                throw ModelAccessException();
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

            newstatement = librdf_new_statement_from_statement(streamstatement);
            n = librdf_new_node_from_node(replacement);
            librdf_statement_set_object(newstatement, n);
            if(0 != librdf_model_context_add_statement(model, context, newstatement))
                throw ModelAccessException();
            if(0 != librdf_model_context_remove_statement(model, context, streamstatement))
                throw ModelAccessException();

            librdf_stream_next(stream);
        }
        librdf_free_statement(statement);
        librdf_free_stream(stream);
    }

}
