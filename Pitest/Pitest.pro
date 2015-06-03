#-------------------------------------------------
#
# Project created by QtCreator 2015-06-03T18:03:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pitest
TEMPLATE = app

target.path = /home/pi/programs/$${TARGET}/bin
INSTALLS += target

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
