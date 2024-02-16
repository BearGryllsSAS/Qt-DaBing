#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_acceptBtn_clicked()
{
    // 解除当前模态对话框的阻塞并且将窗口隐藏
    this->accept();
}

void MyDialog::on_rejectBtn_clicked()
{
    // 解除当前模态对话框的阻塞并且将窗口隐藏
    this->reject();
}

void MyDialog::on_doneBtn_clicked()
{
    // 解除当前模态对话框的阻塞并且将窗口隐藏
    this->done(10);
}
