TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Graphs/graphOperations.c \
        Interpolation/classic.c \
        Interpolation/lagrange.c \
        Interpolation/niyton.c  \
        Aproximate/forkroot.c \
        Aproximate/forkintergal.c \
        Matrix/matrixOperations.c \
        Vectors/vectorOperations.c \
        main.c

HEADERS += \
    Graphs/graphOperations.h \
    Interpolation/lagrange.h \
    Aproximate/forkroot.h \
    Aproximate/forkintergal.h \
    Matrix/matrixOperations.h \
    Vectors/vectorOperations.h
