#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
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


void MainWindow::on_modalDlg_clicked()
{
    // 显示自定义的模态对话框
    MyDialog dlg;


    // 捕捉对话框关闭的信号
    connect(&dlg, &MyDialog::finished, this, [=](int res)       // 每个关闭的窗口都会有次信号
    {
        qDebug() << "result: " << res;
    });
    connect(&dlg, &MyDialog::accepted, this, [=]()
    {
        qDebug() << "accepted 信号被发射了······";
    });
    connect(&dlg, &MyDialog::rejected, this, [=]()
    {
        qDebug() << "rejected 信号被发射了······";
    });


    int ret = dlg.exec();

    if (ret == QDialog::Accepted)
    {
        qDebug() << "accept button clicked...";
    }
    else if (ret == QDialog::Rejected)
    {
        qDebug() << "Rejected button clicked...";
    }
    else
    {
        qDebug() << "done button clicked...";
    }

}
