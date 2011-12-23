#ifndef LENS_H
#define LENS_H

#include <QtCore>
#include "rdf.h"

class Lens {
    public:
        Lens();

        //rdf::Node lens_;

        // relations to blacklist/whitelist generally
        bool whitelistMode_;
        QSet<rdf::Node> propertyList_;

        // relations to whitelist into aggregated node view
        QSet<rdf::Node> aggregPropertyList_;

};


#endif
