#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDialog>
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


void MainWindow::on_QFontDialogBtn_clicked()
{
#if 0
    bool ok;
    QFont ft = QFontDialog::getFont(
                &ok, QFont("微软雅黑", 12, QFont::Bold), this, "选择字体对话框");
    qDebug() << "ok value is" << ok;
#else
    QFont ft = QFontDialog::getFont(NULL);
#endif
    // 设置某一窗口的字体
    ui->testlabelBtn->setFont(ft);
}
