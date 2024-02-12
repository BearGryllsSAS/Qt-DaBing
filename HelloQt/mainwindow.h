#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>      // Qt标准窗口类头文件

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }      // mainwindow.ui 文件中也有一个类叫 MainWindow, 将这个类放到命名空间 Ui 中
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT        // 这个宏是为了能够使用Qt中的信号槽机制

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;     // 定义指针指向窗口的 UI 对象
};
#endif // MAINWINDOW_H
