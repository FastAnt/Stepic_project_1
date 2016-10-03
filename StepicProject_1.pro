QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    Engine.cpp \
    Networkmng.cpp \
    profiler.cpp \
    infocoder.cpp \
    dumpy_server.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Engine.h \
    Networkmng.h \
    profiler.h \
    infocoder.h \
    dumpy_server.h

DISTFILES += \
    registrate.qml
