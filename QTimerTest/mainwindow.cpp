#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建定时器对象
    QTimer* timer = new QTimer(this);

    // 按钮的点击事件，点击按钮后，启动定时器，定期往 label 控件中打印当前时间
    connect(ui->loopBtn, &QPushButton::clicked, this, [=]()
    {
        // 启动或关闭定时器
        if (timer->isActive())
        {
            timer->stop();      // 关闭定时器
            ui->loopBtn->setText("开始");
        }
        else
        {
            timer->start();     // 启动定时器
            ui->loopBtn->setText("关闭");
        }
    });

    connect(timer, &QTimer::timeout, this, [=]()
    {
        // 获取当前时间
        QTime tm = QTime::currentTime();

        // 格式化当前时间
        QString tmstr = tm.toString("hh:mm:ss.zzz");

        // 显示当前时间
        ui->curTime->setText(tmstr);
    });







    // 信号的单次发射
    connect(ui->onceBtn, &QPushButton::clicked, this, [=]()
    {
        // 获取两秒以后的系统时间
        QTimer::singleShot(2000, this, [=]()
        {
            // 获取当前时间
            QTime tm = QTime::currentTime();

            // 格式化当前时间
            QString tmstr = tm.toString("hh:mm:ss.zzz");

            // 显示当前时间
            ui->onceTime->setText(tmstr);
        });
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}

