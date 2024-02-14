#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QElapsedTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 获取当前日期-------演示日期类 QDate
    QDate d = QDate::currentDate();

    // 打印当前日期，第一种方式
    qDebug() << "year：" << d.year() << "，month：" << d.month() << "，day：" << d.day();

    // 打印当前日期，第二种方式。格式化打印 2000-01-01
    QString str = d.toString("yyyy-MM-dd");         // 自己查阅格式化参数
    qDebug() << "date str：" << str;


    // 获取当前时间--------演示时间类 QTime
    QTime curtime = QTime::currentTime();

    // 方式一
    qDebug() << "hour：" << curtime.hour() << "，minute：" << curtime.minute() << "，second：" << curtime.second() <<"，millise：" << curtime.msec();

    // 方式二
    QString strtm = curtime.toString("hh:mm:ss.zzz");
    qDebug() << "格式化的时间：" << strtm;

    // 统计函数运行时间
    // QTime tt;
    QElapsedTimer tt;
    tt.start();
    randNumbers(100);
    int ms = tt.elapsed();
    qDebug() << "函数执行所用的总时间：" << ms << "毫秒";



    // 获取当前日期和时间--------演示日期和时间类 QDateTime
    QDateTime dt = QDateTime::currentDateTime();

    // 方式一 格式化 2020/01/10 12:12:12 上午/下午 (yyyy/MM/dd hh:mm:ss ap)
    QString strdt = dt.toString("yyyy/MM/dd HH:mm:ss ap");
    qDebug() << "当前的时间和日期：" << strdt;

    // 方式二 分别取出时间和日期
    d = dt.date();
    qDebug() << "year：" << d.year() << "，month：" << d.month() << "，day：" << d.day();

    curtime = dt.time();
    qDebug() << "hour：" << curtime.hour() << "，minute：" << curtime.minute() << "，second：" << curtime.second() <<"，millise：" << curtime.msec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::randNumbers(int count)
{
    srand(time(NULL));

    for (int i = 0; i < count; i++)
    {
        int num = rand() % 10000;
        qDebug() << num;
    }
}

