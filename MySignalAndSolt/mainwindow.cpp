#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_me = new Me;
    m_gril = new GrilFriend;

    connect(m_gril, &GrilFriend::hungry, m_me, &Me::eat);       // hungry 信号是自定义的，需要使用者在恰当的时期自己发射该信号

    // 信号连接槽函数
    // connect(ui->hungryBtn, &QPushButton::clicked, this, &MainWindow::hungrySlot);

    // 信号连接信号
    connect(ui->hungryBtn, &QPushButton::clicked, m_gril, &GrilFriend::hungry);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hungrySlot()
{
    // 发射自定义信号
    emit m_gril->hungry();
}

