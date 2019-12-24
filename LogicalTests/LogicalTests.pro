TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_adhoc.h \
        tst_logicaltest1.h

SOURCES += \
        main.cpp



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/include/gtest/lib/ -lgtest
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/include/gtest/lib/ -lgtestd
else:unix: LIBS += -L$$PWD/include/gtest/lib/ -lgtest

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
