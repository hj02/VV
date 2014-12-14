#-------------------------------------------------
#
# Project created by QtCreator 2014-12-11T12:48:26
#
#-------------------------------------------------

QT       += core gui

QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3hluti
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computer.cpp \
    scientist.cpp \
    sqlcomputer.cpp \
    sqlscientist.cpp \
    scienceservice.cpp

HEADERS  += mainwindow.h \
    computer.h \
    scientist.h \
    sqlcomputer.h \
    sqlscientist.h \
    scienceservice.h

FORMS    += mainwindow.ui
