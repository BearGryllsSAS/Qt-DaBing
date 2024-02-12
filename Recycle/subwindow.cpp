#include "subwindow.h"
#include "ui_subwindow.h"
#include <QDebug>

SubWindow::SubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubWindow)
{
    ui->setupUi(this);
}

SubWindow::~SubWindow()
{
    qDebug() << "当父窗口被关闭的时候，顺便执行子窗口的析构函数，回收内存";

    delete ui;
}
