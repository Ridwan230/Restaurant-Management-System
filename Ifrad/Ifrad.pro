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
    add_chef.cpp \
    add_waiter.cpp \
    chef_info.cpp \
    chef_opening.cpp \
    customer.cpp \
    customer_info.cpp \
    display_common.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    man_employee.cpp \
    manager_info.cpp \
    manager_opening.cpp \
    manager_second.cpp \
    menu.cpp \
    menu_customer.cpp \
    menu_last.cpp \
    order.cpp \
    order_display.cpp \
    people.cpp \
    table_reserve.cpp \
    waiter_info.cpp \
    waiter_opening.cpp

HEADERS += \
    add_chef.h \
    add_waiter.h \
    chef_info.h \
    chef_opening.h \
    customer.h \
    customer_info.h \
    display_common.h \
    global.h \
    mainwindow.h \
    man_employee.h \
    manager_info.h \
    manager_opening.h \
    manager_second.h \
    menu.h \
    menu_customer.h \
    menu_last.h \
    order.h \
    order_display.h \
    people.h \
    table_reserve.h \
    waiter_info.h \
    waiter_opening.h

FORMS += \
    add_chef.ui \
    add_waiter.ui \
    chef_opening.ui \
    customer.ui \
    display_common.ui \
    mainwindow.ui \
    man_employee.ui \
    manager_opening.ui \
    manager_second.ui \
    menu_customer.ui \
    menu_last.ui \
    order_display.ui \
    table_reserve.ui \
    waiter_opening.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    food_img.qrc \
    login_img.qrc
