#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>

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


void MainWindow::on_inputDialogBtn_clicked()
{
    // 弹出 int 型对话框
//    int ret = QInputDialog::getInt(this, "int 型对话框", "您当前的年龄：", 10, 1, 100, 2);
//    QMessageBox::information(this, "提示对话框", "您当前的年龄：" + QString::number(ret));

    // 弹出 double 型对话框
//    double ret = QInputDialog::getDouble(this, "double 型对话框", "您的工资：", 2000, 1000, 6000, 3);
//    QMessageBox::information(this, "提示对话框", "您当前的工资：" + QString::number(ret));

    // 弹出下拉选择框
//    QStringList items;
//    items << "苹果" << "橙子" << "橘子" << "葡萄" << "香蕉" << "哈密瓜";
//    QString item = QInputDialog::getItem(this, "下拉选择对话框", "您喜欢的水果：", items, 3, true);
//    QMessageBox::information(this, "提示对话框", "您喜欢的水果：" + item);



    // 弹出字符输入对话框（只能输入单行信息）
//    QString text = QInputDialog::getText(this, "字符输入对话框", "请输入新的密码：", QLineEdit::Password, "hello world");
//    QMessageBox::information(this, "提示对话框", "您输入的密码是：" + text);



    // 弹出字符输入对话框（能输入多行信息）
    QString info = QInputDialog::getMultiLineText(this, "字符输入对话框", "您想对 haibara 说什么呢？", "默认值（不传为空）");
    QMessageBox::information(this, "提示对话框", "您想对 haibara 说：" + info);
}
