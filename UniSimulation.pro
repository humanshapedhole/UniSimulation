#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T14:54:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UniSimulation
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        gui/mainwindow.cpp \
    models/aerodynamics.cpp \
    models/dynamics.cpp \
    tools/math.cpp \
    tools/timer.cpp \
    kernel/loop.cpp

HEADERS  += gui/mainwindow.h \
    models/aerodynamics.h \
    models/dynamics.h \
    tools/math.h \
    tools/timer.h \
    kernel/loop.h

FORMS    += gui/mainwindow.ui
