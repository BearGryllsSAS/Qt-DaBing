#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_me = new Me;
    m_gril = new GrilFriend;

    connect(ui->hungryBtn, &QPushButton::clicked, this, &MainWindow::hungrySlot);

    // 使用 Qt4 的方式进行连接
    connect(m_gril, SIGNAL(hungry()), m_me, SLOT(eat()));
    // 处理重载的信号和函数
    connect(m_gril, SIGNAL(hungry(QString)), m_me, SLOT(eat(QString)));


    // 使用 Qt5 的方式处理重载的信号和函数------需要在外面自定义函数指针
    void (GrilFriend::*gril1)() = &GrilFriend::hungry;
    void (GrilFriend::*gril2)(QString) = &GrilFriend::hungry;
    void (Me::*mypoint)(QString) = &Me::eat;
    connect(m_gril, gril2, m_me, mypoint);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::hungrySlot()
{
    // 发射自定义信号
    emit m_gril->hungry();

    emit m_gril->hungry("意大利面01");

    emit m_gril->hungry("意大利面02");
}

