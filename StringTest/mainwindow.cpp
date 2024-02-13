#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 字符串的动态拼接

    // （唐僧）有（3）个徒弟，分别是（孙悟空），（猪八戒），（沙僧）
    QString str = QString("（%1）有（%2）个徒弟，分别是（%3），（%4），（%5）").arg("唐僧").arg(3).arg("孙悟空").arg("猪八戒").arg("沙僧");

    qDebug() << "字符串的值：" << str << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

