#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProgressDialog>
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_progressdlg_clicked()
{
    // 创建进度条对象 不加 this 则需要自己手动释放资源
    QProgressDialog* progress = new QProgressDialog("正在拷贝数据...", "取消拷贝", 0, 100, this);
    // QProgressDialog* progress = new QProgressDialog("正在拷贝数据...", "取消拷贝", 0, 100);

    // 设置进度条窗口为模态显示，阻塞在父窗口 --- 要重新指定父对象 不要怕对象会被再次析构，qt框架很聪明
    progress->setWindowModality(Qt::WindowModal);

    // 初始化并显示进度条窗口
    progress->setWindowTitle("标题");
    progress->show();

    // 定时更新进度条
    static int value = progress->minimum();               // 必须设为静态变量，否则函数退出后回调函数中的 value 会出错
    // QTimer* timer = new QTimer(this);                     // 不加 this 则需要自己手动释放资源
    QTimer* timer = new QTimer;
    connect(timer, &QTimer::timeout, this, [=]()
    {
        progress->setValue(value);
        value++;

        // 当 value > 最大值的时候
        if (value > progress->maximum())
        {
            timer->stop();
            value = 0;

            // 手动释放资源
            delete progress;
            delete timer;
        }
    });

    // 绑定 “取消拷贝” 以及 “ X ” 按钮的信号
    connect(progress, &QProgressDialog::canceled, this, [=]()
    {
        timer->stop();
        value = 0;

        // 手动释放资源
        delete progress;
        delete timer;
    });

    // 启动定时器
    timer->start(50);

    qDebug() << "******************1";
}
