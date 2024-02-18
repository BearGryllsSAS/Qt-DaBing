#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 为菜单项绑定信号
    connect(ui->open_action, &QAction::triggered, this, [=]()
    {
        QMessageBox::information(this, "clicked", "点击打开文件菜单项");
    });

    connect(ui->save_action, &QAction::triggered, this, [=]()
    {
        QMessageBox::information(this, "clicked", "点击保存文件菜单项");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

