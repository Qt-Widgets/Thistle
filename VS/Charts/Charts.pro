# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = lib
TARGET = Charts
DESTDIR = ../../../bin/vs2012/Debug
QT += core widgets gui
CONFIG += staticlib debug
DEFINES += WIN64 QT_DLL QT_WIDGETS_LIB CHARTS_LIB
INCLUDEPATH += . \
    ./../../Thistle/Charts \
    ./../../Thistle \
    ./../../../bin/vs2012/Debug/GeneratedFiles \
    ./../../Thistle/Charts/Layers \
    ./../../Thistle/Charts/private \
    ./../../Thistle/Charts/linear/private \
    ./../../Thistle/Charts/linear \
    ./../../Thistle/Charts/xy
DEPENDPATH += .
MOC_DIR += ./../../../bin/vs2012/debug/GeneratedFiles
OBJECTS_DIR += debug
UI_DIR += ./../../../bin/vs2012/$(ConfigurationName)/GeneratedFiles
RCC_DIR += ./../../../bin/vs2012/$(ConfigurationName)/GeneratedFiles
include(../../qmake/Charts/Charts.pri)