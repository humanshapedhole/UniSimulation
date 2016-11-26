#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T14:54:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UniSimulation
TEMPLATE = app


SOURCES += main.cpp\
        gui/mainwindow.cpp \
    models/aerodynamics.cpp \
    models/dynamics.cpp \
    tools/math.cpp \
    tools/timer.cpp

HEADERS  += gui/mainwindow.h \
    models/aerodynamics.h \
    models/dynamics.h \
    tools/math.h \
    tools/timer.h

FORMS    += gui/mainwindow.ui
