TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cmeal.cpp \
        cnachwuchskraft.cpp \
        cperson.cpp \
        cpizza.cpp \
        ingredients.cpp \
        main.cpp \
        mealfactory.cpp

HEADERS += \
    cmeal.h \
    cnachwuchskraft.h \
    cperson.h \
    cpizza.h \
    ingredients.h \
    mealfactory.h
