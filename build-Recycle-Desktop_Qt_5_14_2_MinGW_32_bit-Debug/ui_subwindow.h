/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SubWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SubWindow)
    {
        if (SubWindow->objectName().isEmpty())
            SubWindow->setObjectName(QString::fromUtf8("SubWindow"));
        SubWindow->resize(400, 300);
        pushButton = new QPushButton(SubWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 93, 28));
        pushButton_2 = new QPushButton(SubWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 230, 93, 28));

        retranslateUi(SubWindow);

        QMetaObject::connectSlotsByName(SubWindow);
    } // setupUi

    void retranslateUi(QDialog *SubWindow)
    {
        SubWindow->setWindowTitle(QCoreApplication::translate("SubWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SubWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SubWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubWindow: public Ui_SubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
