#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置窗口的标题
    setWindowTitle("haibara ai1");

    // 给显示的窗口设置图标
    setWindowIcon(QIcon("C:\\Qt\\Documents\\resource\\image\\haibara1.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_msgbox_clicked()
{
    // 依次显示各种模态对话框
    QMessageBox::about(this, "消息提示框", "这是一个简单的 消息提示框!!!");

    QMessageBox::critical(this, "错误对话框", "这是一个简单的 错误对话框!!!");

    // 最后一个参数指定和回车键关联的那个按钮，不指定则默认是第一个
    int ret = QMessageBox::question(this, "选择对话框", "你要保存文件修改的内容吗???", QMessageBox::Save|QMessageBox::Cancel, QMessageBox::Cancel);

    if (ret == QMessageBox::Save)
    {
        QMessageBox::information(this, "保存成功对话框", "恭喜你保存成功了!!!");
    }
    else
    {
        QMessageBox::information(this, "放弃保存对话框", "你放弃了保存!!!");
    }
}
