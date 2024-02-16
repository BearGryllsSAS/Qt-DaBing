#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 移动窗口的槽函数
    void on_moveBtn_clicked();

    // 获取窗口的位置信息的槽函数
    void on_positionBtn_clicked();

    // 修改窗口的位置和尺寸的槽函数
    void on_modifyBtn_clicked();

    // 修改窗口标题和图标的槽函数
    void on_modefyPlusBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
