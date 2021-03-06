#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T18:25:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WykresyProjekt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graphmanager.cpp \
    graph.cpp \
    graphline.cpp \
    graphdrawer.cpp

HEADERS  += mainwindow.h \
    graphmanager.h \
    graph.h \
    graphline.h \
    graphdrawer.h

FORMS    += mainwindow.ui
