#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QtGui>
#include "rdf.h"

struct Template {
    QString name;
    QString path;
    rdf::Node variable;
    rdf::Node ofClass;
};

#endif
