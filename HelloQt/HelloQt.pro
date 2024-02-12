# 在项目文件中, 注释需要使用 井号(#)

# 项目编译的时候需要加载哪些底层模块
QT       += core gui

# 如果当前Qt版本大于4, 会添加一个额外的模块: widgets
# Qt 5中对gui模块进行了拆分, 将 widgets 独立出来了
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 使用c++11新特性
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#如果在项目中调用了废弃的函数, 项目编译的时候会有警告的提示
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# 项目中的源文件
SOURCES += \
    main.cpp \
    mainwindow.cpp \
    testdialog.cpp \
    testwidget.cpp

# 项目中的头文件
HEADERS += \
    mainwindow.h \
    testdialog.h \
    testwidget.h

# 项目中的窗口界面文件
FORMS += \
    mainwindow.ui \
    testdialog.ui \
    testwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
