#include "mainwindow.h"
#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 在主窗口显示之前 先显示模态登录窗口
    Login login;
    login.exec();


    MainWindow w;
    w.show();


    return a.exec();
}
