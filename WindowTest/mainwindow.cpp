#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置窗口的最大尺寸
    // setMaximumSize(900, 900);

    // 设置窗口的最小尺寸
    // setMinimumSize(300, 300);

    // 设置窗口的固定尺寸
    // setFixedSize(500, 500);

    // 设置窗口的标题
    setWindowTitle("haibara ai1");

    // 给显示的窗口设置图标
    setWindowIcon(QIcon("C:\\Qt\\Documents\\resource\\image\\haibara1.png"));



    // 捕捉窗口标题修改了的信号
    connect(this, &MainWindow::windowTitleChanged, this, [=](const QString& title)
    {
        qDebug() << "新的标题：" << title;
    });

    // 捕捉窗口图标修改了的信号
    connect(this, &MainWindow::windowIconChanged, this, [=](const QIcon& icon)
    {
        qDebug() << "新的图标...";
    });



    // 窗口的右键菜单
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &MainWindow::customContextMenuRequested, this, [=](const QPoint& pos)
    {
        QMenu menu;
        menu.addAction("西红柿");
        menu.addAction("黄瓜");
        menu.addAction("茄子");
        menu.exec(QCursor::pos());
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 移动窗口
void MainWindow::on_moveBtn_clicked()
{
    // 获取窗口的位置信息
    QRect rect = this->frameGeometry();

    // 移动窗口
    move(rect.topLeft() + QPoint(20, 20));
}

// 获取窗口的位置信息
void MainWindow::on_positionBtn_clicked()
{
    // 获取窗口的位置信息
    QRect rect = this->frameGeometry();

    // 打印窗口的位置信息
    qDebug() << "左上角: " << rect.topLeft()
             << "右上角: " << rect.topRight()
             << "左下角: " << rect.bottomLeft()
             << "右下角: " << rect.bottomRight()
             << "宽度: " << rect.width()
             << "高度: " << rect.height();
}

// 修改窗口的位置和尺寸
void MainWindow::on_modifyBtn_clicked()
{
    int x = 100 + rand() % 500;
    int y = 100 + rand() % 500;

    int width = this->width() + 10;
    int height = this->height() + 10;

    setGeometry(x, y, width, height);
}

// 修改窗口标题和图标---修改后会发出相应的信号，用 connect 接收
void MainWindow::on_modefyPlusBtn_clicked()
{
    // 修改窗口的标题
    setWindowTitle("haibara ai2");

    // 修改窗口的图标
    setWindowIcon(QIcon("C:\\Qt\\Documents\\resource\\image\\haibara2.png"));
}
