#ifndef GUIUTILS_H
#define GUIUTILS_H

#include <QtGui>
#include <exception>
#include <typeinfo>

static void alertPopup(QString& m) {
    QMessageBox msgBox;
    msgBox.setText(m);
    msgBox.exec();
}

#endif
