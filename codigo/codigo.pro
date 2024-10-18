TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Estaciones.cpp \
        Funciones.cpp \
        Surtidores.cpp \
        Tanques.cpp \
        Ventas.cpp \
        main.cpp

HEADERS += \
    Estaciones.h \
    Funciones.h \
    Surtidores.h \
    Tanques.h \
    Ventas.h

DISTFILES += \
    datos_estaciones.txt
