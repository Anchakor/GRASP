#include "lens.h"
#include "rdf.h"

Lens::Lens()
{
    whitelistMode_ = false;

    rdf::Node n1 ("http://xmlns.com/foaf/0.1/birthday");
    rdf::Node n2 ("http://xmlns.com/foaf/0.1/nick");
    rdf::Node n3 ("http://www.w3.org/2002/07/owl#sameAs");
    aggregPropertyList_.insert(n1);
    aggregPropertyList_.insert(n2);
    aggregPropertyList_.insert(n3);

}

void Lens::clear()
{
    whitelistMode_ = false;
    propertyList_.clear();
    aggregPropertyList_.clear();
}

void Lens::loadLens(librdf_node *l)
{
    clear();

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    statement = librdf_new_statement_from_nodes(rdf::world, librdf_new_node_from_node(l), NULL, NULL);
    stream = librdf_model_find_statements_in_context(rdf::model, statement, rdf::lensContext);
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);

        rdf::Node ntype ("http://www.w3.org/1999/02/22-rdf-syntax-ns#type");
        librdf_node *np = librdf_statement_get_predicate(streamstatement);
        librdf_node *no = librdf_statement_get_object(streamstatement);
        rdf::Node nio (no);
        if(librdf_node_equals(np, ntype)) {
            rdf::Node nBl ("http://mud.cz/sw/ed#lens/BlacklistProperties");
            if(librdf_node_equals(no, nBl)) whitelistMode_ = false;
            rdf::Node nWl ("http://mud.cz/sw/ed#lens/WhitelistProperties");
            if(librdf_node_equals(no, nWl)) whitelistMode_ = true;
        }
        rdf::Node nprop ("http://mud.cz/sw/ed#lens/property");
        if(librdf_node_equals(np, nprop)) {
            propertyList_.insert(nio);
        }
        rdf::Node naggprop ("http://mud.cz/sw/ed#lens/aggregatedProperty");
        if(librdf_node_equals(np, naggprop)) {
            aggregPropertyList_.insert(nio);
        }

        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}
