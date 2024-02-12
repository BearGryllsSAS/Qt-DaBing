#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"
#include "testdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)        // 基于mainwindow.ui创建一个实例对象
{
    // 将 mainwindow.ui 的实例对象和当前类的对象进行关联
    // 这样同名的两个类对象就产生了关联, 合二为一了
    ui->setupUi(this);

    // 一般在该构造函数种进行初始化操作（窗口、数据、······）


    // 显示当前窗口的时候，显示另外一个窗口 TestWidget （有边框）
    // 创建窗口对象，没有给 w 对象指定父对象
    // 这个窗口时一个独立窗口，必须要 show 才能显示
    TestWidget* w = new TestWidget;
    // 显示当前窗口
    w->show();

//    // 显示当前窗口的时候，显示另外一个窗口 TestWidget （无边框）
//    // 创建窗口对象，同时给 w 对象指定父对象
//    // 这个窗口不是一个独立窗口，在父窗口显示的时候一并显示该窗口
//    // 构造函数 explicit TestWidget(QWidget *parent = nullptr);
//    TestWidget* w = new TestWidget(this);



//    // 创建对话框窗口
//    TestDialog* dia = new TestDialog(this);
//    // 非模态
//    dia->show();


    // 创建对话框窗口
    TestDialog* dia = new TestDialog(this);
    // 模态   会阻塞程序的运行不能显示主窗口，直到该构造函数执行完毕后才能显示。不能进行焦点切换
    dia->exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}

