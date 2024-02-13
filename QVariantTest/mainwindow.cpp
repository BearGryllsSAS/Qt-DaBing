#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 整形数相加
    int value = dataPlus(10, 20).toInt();

    // 字符串相加
    QString str = dataPlus("hello", "world").toString();

    qDebug() << "int value：" << value;
    qDebug() << "string value：" << str;
}

MainWindow::~MainWindow()
{
    delete ui;
}

QVariant MainWindow::dataPlus(QVariant a, QVariant b)
{
    QVariant ret;

    // 判断当前参数的类型是字符串还是整形
    if (a.type() == QVariant::Int && b.type() == QVariant::Int)
    {
        ret = QVariant(a.toInt() + b.toInt());
    }
    else if(a.type() == QVariant::String && b.type() == QVariant::String)
    {
        ret.setValue(a.toString() + b.toString());
    }

    return ret;
}

