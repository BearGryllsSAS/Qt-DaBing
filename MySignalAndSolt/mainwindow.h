#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "me.h"
#include "grilfriend.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // 添加 hungry 按钮的槽函数
    void hungrySlot();

private:
    Ui::MainWindow *ui;

    GrilFriend* m_gril;
    Me* m_me;
};
#endif // MAINWINDOW_H
