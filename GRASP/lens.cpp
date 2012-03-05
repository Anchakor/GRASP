#include "lens.h"
#include "rdf.h"
#include "mainwindow.h"

Lens::Lens()
{
    whitelistMode_ = false;
    aggregateLiterals_ = true;

    rdf::Node n1 (RDFURIPREFIX"type");
    rdf::Node n3 ("http://www.w3.org/2002/07/owl#sameAs");
    aggregPropertyList_.insert(n1);
    aggregPropertyList_.insert(n3);
    propertyList_.insert(n1);
    propertyList_.insert(n3);

}

void Lens::clear()
{
    whitelistMode_ = false;
    aggregateLiterals_ = true;
    propertyList_.clear();
    aggregPropertyList_.clear();
}

void Lens::loadLens(librdf_node *l)
{
    if(!lensGraph) return;
    clear();

    lensNode_ = rdf::Node(l);

    librdf_stream *stream;
    librdf_statement *statement;
    librdf_statement *streamstatement;

    statement = librdf_new_statement_from_nodes(rdf::world, librdf_new_node_from_node(l), NULL, NULL);
    stream = librdf_model_find_statements_in_context(rdf::model, statement, lensGraph->getContext());
    if(NULL == stream) throw rdf::ModelAccessException();

    while(!librdf_stream_end(stream)) {
        streamstatement = librdf_stream_get_object(stream);

        rdf::Node ntype (RDFURIPREFIX"type");
        librdf_node *np = librdf_statement_get_predicate(streamstatement);
        librdf_node *no = librdf_statement_get_object(streamstatement);
        rdf::Node nio (no);
        if(librdf_node_equals(np, ntype)) {
            rdf::Node nBl (LENSURIPREFIX"BlacklistProperties");
            if(librdf_node_equals(no, nBl)) whitelistMode_ = false;
            rdf::Node nWl (LENSURIPREFIX"WhitelistProperties");
            if(librdf_node_equals(no, nWl)) whitelistMode_ = true;
            rdf::Node nAL (LENSURIPREFIX"NotAggregateLiterals");
            if(librdf_node_equals(no, nAL)) aggregateLiterals_ = false;
        }
        rdf::Node nprop (LENSURIPREFIX"property");
        if(librdf_node_equals(np, nprop)) {
            propertyList_.insert(nio);
        }
        rdf::Node naggprop (LENSURIPREFIX"aggregatedProperty");
        if(librdf_node_equals(np, naggprop)) {
            aggregPropertyList_.insert(nio);
        }

        librdf_stream_next(stream);
    }
    librdf_free_statement(statement);
    librdf_free_stream(stream);
}
