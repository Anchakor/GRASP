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
        contextmenu.cpp

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
        contextmenu.h

FORMS    += mainwindow.ui\
        nodeedit.ui

LIBS += -lrdf -lraptor2

QMAKE_CC = gcc
QMAKE_CXX = g++
QMAKE_CXXFLAGS+=-O3

QMAKE_INCDIR += /usr/include/rasqal
QMAKE_INCDIR += /usr/include/raptor2
