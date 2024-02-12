#include "mainwindow.h"     // 生成的窗口类头文件
#include <QApplication>     // 应用程序类头文件

int main(int argc, char *argv[])
{
    // 创建应用程序对象, 在一个Qt项目中实例对象有且仅有一个
    // 类的作用: 检测触发的事件, 进行事件循环并处理
    QApplication a(argc, argv);

    // 创建窗口类对象
    MainWindow w;

    // 显示窗口
    w.show();

    // 应用程序对象开始事件循环, 保证应用程序不退出
    return a.exec();
}
