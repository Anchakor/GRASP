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
        exception.cpp

HEADERS  += mainwindow.h\
        persistentcounter.h\
        rdf.h\
        exception.h

FORMS    += mainwindow.ui

LIBS += -lrdf

QMAKE_CC = clang
QMAKE_CXX = clang++
QMAKE_INCDIR += /usr/include/rasqal
QMAKE_INCDIR += /usr/include/raptor2
