/********************************************************************************
** Form generated from reading UI file 'welcomewindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW2_H
#define UI_WELCOMEWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow2
{
public:
    QLabel *label_hello;
    QLabel *label_welcome;
    QLabel *label_image;
    QPushButton *pushButton_Logout;

    void setupUi(QDialog *WelcomeWindow2)
    {
        if (WelcomeWindow2->objectName().isEmpty())
            WelcomeWindow2->setObjectName("WelcomeWindow2");
        WelcomeWindow2->resize(820, 722);
        label_hello = new QLabel(WelcomeWindow2);
        label_hello->setObjectName("label_hello");
        label_hello->setGeometry(QRect(70, 70, 131, 16));
        label_welcome = new QLabel(WelcomeWindow2);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(60, 110, 291, 91));
        label_image = new QLabel(WelcomeWindow2);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(30, 110, 741, 431));
        pushButton_Logout = new QPushButton(WelcomeWindow2);
        pushButton_Logout->setObjectName("pushButton_Logout");
        pushButton_Logout->setGeometry(QRect(60, 580, 100, 32));
        label_image->raise();
        label_hello->raise();
        pushButton_Logout->raise();
        label_welcome->raise();

        retranslateUi(WelcomeWindow2);

        QMetaObject::connectSlotsByName(WelcomeWindow2);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow2)
    {
        WelcomeWindow2->setWindowTitle(QCoreApplication::translate("WelcomeWindow2", "Dialog", nullptr));
        label_hello->setText(QCoreApplication::translate("WelcomeWindow2", "Hello admin 20", nullptr));
        label_welcome->setText(QCoreApplication::translate("WelcomeWindow2", "<html><head/><body><p align=\"center\"><span style=\" font-size:64pt; color:#ffffff;\">Welcome</span></p></body></html>", nullptr));
        label_image->setText(QString());
        pushButton_Logout->setText(QCoreApplication::translate("WelcomeWindow2", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow2: public Ui_WelcomeWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW2_H
