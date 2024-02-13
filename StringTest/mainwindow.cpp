#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QByteArray>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 字符串的动态拼接
    // （唐僧）有（3）个徒弟，分别是（孙悟空），（猪八戒），（沙僧）
    QString str = QString("（%1）有（%2）个徒弟，分别是（%3），（%4），（%5）").arg("唐僧").arg(3).arg("孙悟空").arg("猪八戒").arg("沙僧");
    qDebug() << "字符串的值：" << str << endl;

    // 计算对象中的字符串长度
    // 长度是字符的个数，一个汉字算一个字符
    QString tem1 = "我很帅，哈哈哈···";
    // 长度是字符串占用的字节数，一个汉字三个字节。标点符号另算
    QByteArray tem2 = "我很帅，哈哈哈···";
    qDebug() << "QString 字符个数：" << tem1.length();
    qDebug() << "QByteArray 字节长度：" << tem2.length();
}

MainWindow::~MainWindow()
{
    delete ui;
}

