QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chef_info.cpp \
    chef_opening.cpp \
    customer.cpp \
    customer_info.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    manager_info.cpp \
    manager_opening.cpp \
    manager_second.cpp \
    menu.cpp \
    people.cpp \
    waiter_info.cpp \
    waiter_opening.cpp

HEADERS += \
    chef_info.h \
    chef_opening.h \
    customer.h \
    customer_info.h \
    global.h \
    mainwindow.h \
    manager_info.h \
    manager_opening.h \
    manager_second.h \
    menu.h \
    people.h \
    waiter_info.h \
    waiter_opening.h

FORMS += \
    chef_opening.ui \
    customer.ui \
    mainwindow.ui \
    manager_opening.ui \
    manager_second.ui \
    waiter_opening.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    login_img.qrc
