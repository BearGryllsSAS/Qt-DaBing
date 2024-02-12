#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建窗口并指定父对象
    SubWindow* sub = new SubWindow(this);
    sub->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

