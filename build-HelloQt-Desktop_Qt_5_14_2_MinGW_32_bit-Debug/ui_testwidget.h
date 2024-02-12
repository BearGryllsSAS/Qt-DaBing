/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName(QString::fromUtf8("TestWidget"));
        TestWidget->resize(400, 300);
        pushButton = new QPushButton(TestWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 160, 93, 28));
        pushButton_2 = new QPushButton(TestWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 110, 93, 28));
        pushButton_3 = new QPushButton(TestWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 220, 93, 28));
        pushButton_4 = new QPushButton(TestWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 100, 93, 28));
        pushButton_5 = new QPushButton(TestWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 160, 93, 28));
        pushButton_6 = new QPushButton(TestWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 220, 93, 28));
        pushButton_7 = new QPushButton(TestWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 250, 93, 28));
        pushButton_8 = new QPushButton(TestWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 50, 93, 28));

        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QWidget *TestWidget)
    {
        TestWidget->setWindowTitle(QCoreApplication::translate("TestWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
