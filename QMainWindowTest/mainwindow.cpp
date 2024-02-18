#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QToolBar>
#include <QLabel>
#include <QTimer>

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



    // 给工具栏调价按钮和单行输入框
    ui->toolBar->addWidget(new QPushButton("搜索"));
    // ui->toolBar->addWidget(new QLineEdit);           // 若想设置输入框的大小则不能传匿名对象
    QLineEdit* edit = new QLineEdit;
    // edit->setMaximumWidth(200);                         // 跟随窗口变大，最多200
    edit->setFixedWidth(100);
    ui->toolBar->addWidget(edit);



    // 通过代码添加第二个工具栏对象
    QToolBar* toolbar = new QToolBar("toolbar");
    this->addToolBar(Qt::LeftToolBarArea, toolbar);



    // 添加状态栏子控件
    // 按钮
    ui->statusbar->showMessage("我是状态栏·······", 3000);
    QPushButton* button = new QPushButton("按钮");
    ui->statusbar->addWidget(button);
    // 标签
    QLabel* label = new QLabel("hello world");
    ui->statusbar->addWidget(label);

    // 直接在状态栏中打印文本信息（与以上的方式存在冲突）
    // ui->statusbar->showMessage("我是状态栏·······");

    // 在文本信息消失后再次显示按钮和标签（需要手动）
    QTimer::singleShot(5000, this, [=]()
    {
        button->show();
        label->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

