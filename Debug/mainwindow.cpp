#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "我很帅" << '*' << 10000 << endl;
    qDebug() << "我不帅" << "*" << 1000;
}

MainWindow::~MainWindow()
{
    delete ui;
}

