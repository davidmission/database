#-------------------------------------------------
#
# Project created by QtCreator 2017-12-01T09:47:09
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = database
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    src/data/base/oracle.cpp \
    src/data/databasefactory.cpp \
    common/setting.cpp \
    src/data/databasepool.cpp

HEADERS  += widget.h \
    src/data/database.h \
    src/data/base/oracle.h \
    src/data/databasefactory.h \
    define/defines.h \
    common/setting.h \
    src/data/databasepool.h

FORMS    += widget.ui
