QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dialog1.cpp \
    dialog2.cpp \
    dialog3.cpp \
    dialog6.cpp \
    dialog8.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dialog.h \
    dialog1.h \
    dialog2.h \
    dialog3.h \
    dialog6.h \
    dialog8.h \
    mainwindow.h

FORMS += \
    dialog.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui \
    dialog6.ui \
    dialog8.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
