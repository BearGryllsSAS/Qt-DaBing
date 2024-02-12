#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    // 移动主窗口 默认居中
//    this->move(100, 100);

    // 窗口的坐标系是基于父窗口（也就是 new 的时候指定的窗口）

    // 创建第一个按钮，让这个按钮作为当前创建的窗口的子控件
    QPushButton* btnA = new QPushButton(this);
    // 移动按钮的位置
    btnA->move(10, 10);
    // 给按钮设置固定的大小
    btnA->setFixedSize(200, 200);

    // 创建第二个按钮，让这个按钮作为当前创建的窗口的子控件
    QPushButton* btnB = new QPushButton(btnA);
    // 移动按钮的位置
    btnB->move(10, 10);
    // 给按钮设置固定的大小
    btnB->setFixedSize(100, 100);

    // 创建第三个按钮，让这个按钮作为当前创建的窗口的子控件
    QPushButton* btnC = new QPushButton(btnB);
    // 移动按钮的位置
    btnC->move(10, 10);
    // 给按钮设置固定的大小
    btnC->setFixedSize(50, 50);

}

MainWindow::~MainWindow()
{
    delete ui;
}

