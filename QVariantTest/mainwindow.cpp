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

    // 创建 person 对象
    Person p;
    p.id = 250;
    p.name = "张三丰";

    // 用 QVariant 包装自定义类型（两种方法）
#if 1
    QVariant v;
    v.setValue(p);
#else
    QVariant v = QVariant::fromValue(p);
#endif

    // 取出 v 对象中的数据
    if (v.canConvert<Person>())
    {
        Person temp = v.value<Person>();

        qDebug() << "id：" << temp.id << " name：" << temp.name;
    }
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
    else if (a.type() == QVariant::String && b.type() == QVariant::String)
    {
        ret.setValue(a.toString() + b.toString());
    }

    return ret;
}

