/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
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

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName(QString::fromUtf8("TestDialog"));
        TestDialog->resize(390, 287);
        pushButton = new QPushButton(TestDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 240, 93, 28));
        pushButton_2 = new QPushButton(TestDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 240, 93, 28));
        pushButton_3 = new QPushButton(TestDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 170, 93, 28));
        pushButton_4 = new QPushButton(TestDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 170, 93, 28));
        pushButton_5 = new QPushButton(TestDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 120, 93, 28));
        pushButton_6 = new QPushButton(TestDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 240, 93, 28));
        pushButton_7 = new QPushButton(TestDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 120, 93, 28));
        pushButton_8 = new QPushButton(TestDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 200, 93, 28));

        retranslateUi(TestDialog);

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        TestDialog->setWindowTitle(QCoreApplication::translate("TestDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TestDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
