# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = lib
TARGET = Kernel
DESTDIR = ../../../bin/vs2012/Debug
QT += core widgets gui
CONFIG += staticlib debug
DEFINES += WIN64 QT_DLL QT_WIDGETS_LIB KERNEL_LIB
INCLUDEPATH += . \
    ./../../Thistle/kernel \
    ./../../../bin/vs2012/Debug/GeneratedFiles
DEPENDPATH += .
MOC_DIR += ./../../../bin/vs2012/debug/GeneratedFiles
OBJECTS_DIR += debug
UI_DIR += ./../../../bin/vs2012/$(ConfigurationName)/GeneratedFiles
RCC_DIR += ./../../../bin/vs2012/$(ConfigurationName)/GeneratedFiles
include(../../qmake/Kernel/Kernel.pri)
