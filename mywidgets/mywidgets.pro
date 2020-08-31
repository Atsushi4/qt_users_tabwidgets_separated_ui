TEMPLATE = lib
CONFIG += staticlib

QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets



FORMS += \
    mywidget1.ui \
    mywidget2.ui

HEADERS += \
    mywidget1.h \
    mywidget2.h

SOURCES += \
    mywidget1.cpp \
    mywidget2.cpp
