#-------------------------------------------------
#
# Project created by QtCreator 2011-03-22T19:17:34
#
#-------------------------------------------------

QT       += core gui

TARGET = GRASP
TEMPLATE = app

CONFIG += debug

SOURCES += main.cpp\
        mainwindow.cpp\
        persistentcounter.cpp\
        rdf.cpp\
        graphview.cpp\
        graph.cpp\
        graphicslabel.cpp\
        graphnode.cpp\
        graphedge.cpp\
        graphutils.cpp\
        lens.cpp\
        aggreg.cpp\
        contextmenu.cpp\
        templatemenu.cpp\
        searchdialog.cpp\
        layout.cpp\
        prefixdock.cpp\
        prefixmodel.cpp

HEADERS  += mainwindow.h\
        persistentcounter.h\
        rdf.h\
        graphview.h\
        graph.h\
        graphicslabel.h\
        graphnode.h\
        graphedge.h\
        graphutils.h\
        guiutils.h\
        lens.h\
        aggreg.h\
        contextmenu.h\
        templatemenu.h\
        searchdialog.h\
        layout.h\
        prefixdock.h\
        prefixmodel.h

FORMS    += mainwindow.ui\
        nodeedit.ui\
        search.ui

LIBS += -lrdf -lraptor2 -lpthread -L../OGDF/_release -lOGDF

QMAKE_CC = gcc
QMAKE_CXX = g++
QMAKE_CXXFLAGS+=-O3

QMAKE_INCDIR += /usr/include/rasqal
QMAKE_INCDIR += /usr/include/raptor2
QMAKE_INCDIR += ../OGDF
