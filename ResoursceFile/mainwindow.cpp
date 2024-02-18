#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 给显示的窗口设置图标
    setWindowIcon(QIcon(":/img/_58db6d80-f49c-466b-9622-f09a715bb45c.jfif"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

