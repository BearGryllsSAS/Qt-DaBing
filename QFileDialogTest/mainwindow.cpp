#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QMessageBox"

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


void MainWindow::on_fileDialogBtn_clicked()
{
    // 打开目录
//    QString dirName = QFileDialog::getExistingDirectory(this, "打开目录对话框", "c:\\");
//    QMessageBox::information(this, "消息对话框", "您选择的目录是: " + dirName);


    // 打开一个文件
//    QString arg("Text files (*.txt)");
//    QString fileName = QFileDialog::getOpenFileName(
//                  this, tr("打开单个文件对话框"), "c:\\",
//                  tr("Images (*.png *.jpg);;Text files (*.txt)"), &arg);
//    QMessageBox::information(this, "消息对话框", "您选择的文件是: " + fileName);


     // 同时打开多个文件
//    QStringList fileNames = QFileDialog::getOpenFileNames(
//                this, tr("打开多个文件对话框"), "c:\\",
//                tr("Images (*.png *.jpg);;Text files (*.txt)"));
//    QString names;
//    for (int i = 0; i < fileNames.size(); i++)
//    {
//        names += fileNames.at(i) + " ";
//    }
//    QMessageBox::information(this, "消息对话框", "您选择的文件是: " + names);



    // 选择一个存在或者不存在的文件（这里并不是真正意义上的保存，仅仅是拿到文件路径，后续还要另有操作）
    QString fileName = QFileDialog::getSaveFileName(this, "保存文件对话框", "c:\\");
    QMessageBox::information(this, "消息对话框", "您指定的保存数据的文件是: " + fileName);
}
