#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T20:59:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Potatool2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        source/main.cpp \
    source/Core/Specification.cpp \
    source/Core/SpecificationModel.cpp \
    source/Models/Specifications/IntegerSpecificationModel.cpp \
    source/Core/DataBase.cpp \
    source/Models/Specifications/DecimalSpecificationModel.cpp \
    source/Models/Specifications/BaseNumericalSpecificationModel.cpp \
    source/Core/ModelSpecificationFactory.cpp \
    source/PotatoolWindow.cpp \
    source/Core/Potatool2.cpp \
    source/Models/Specifications/StringSpecificationModel.cpp

HEADERS += \
    source/Core/Specification.h \
    source/Core/SpecificationModel.h \
    source/Models/Specifications/IntegerSpecificationModel.h \
    source/Core/DataBase.h \
    source/Core/DataBaseCollection.h \
    source/Models/Specifications/DecimalSpecificationModel.h \
    source/Models/Specifications/BaseNumericalSpecificationModel.h \
    source/Core/ModelSpecificationFactory.h \
    source/PotatoolWindow.h \
    source/Core/Potatool2.h \
    source/Models/Specifications/StringSpecificationModel.h

FORMS += \
    ui/potatool.ui
