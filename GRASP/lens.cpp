#include "lens.h"
#include "rdf.h"

Lens::Lens()
{
    //rdf::Node& lens) {
    //lens_ = lens;

    // TODO loading of the config from graph
    librdf_query* q;
    //q = librdf_new_query(rdf::world, const char *name, librdf_uri *uri, unsigned char *query_string, librdf_uri *base_uri);

    rdf::Node n1 ("http://xmlns.com/foaf/0.1/birthday");
    rdf::Node n2 ("http://xmlns.com/foaf/0.1/nick");
    rdf::Node n3 ("http://www.w3.org/2002/07/owl#sameAs");
    aggregPropertyList_.insert(n1);
    aggregPropertyList_.insert(n2);
    aggregPropertyList_.insert(n3);

}
