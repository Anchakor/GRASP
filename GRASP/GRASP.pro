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
        graphedge.cpp

HEADERS  += mainwindow.h\
        persistentcounter.h\
        rdf.h\
        graphview.h\
        graph.h\
        graphicslabel.h\
        graphnode.h\
        graphedge.h

FORMS    += mainwindow.ui

LIBS += -lrdf

QMAKE_CC = gcc
QMAKE_CXX = g++
QMAKE_INCDIR += /usr/include/rasqal
QMAKE_INCDIR += /usr/include/raptor2
