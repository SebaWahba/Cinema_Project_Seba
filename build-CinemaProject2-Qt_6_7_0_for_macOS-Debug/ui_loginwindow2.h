/********************************************************************************
** Form generated from reading UI file 'loginwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW2_H
#define UI_LOGINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow2
{
public:
    QWidget *centralwidget;
    QLabel *label_Username;
    QLabel *label_Password;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Register;
    QLabel *label_ErrorMessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow2)
    {
        if (LoginWindow2->objectName().isEmpty())
            LoginWindow2->setObjectName("LoginWindow2");
        LoginWindow2->resize(800, 600);
        centralwidget = new QWidget(LoginWindow2);
        centralwidget->setObjectName("centralwidget");
        label_Username = new QLabel(centralwidget);
        label_Username->setObjectName("label_Username");
        label_Username->setGeometry(QRect(70, 50, 81, 16));
        label_Password = new QLabel(centralwidget);
        label_Password->setObjectName("label_Password");
        label_Password->setGeometry(QRect(70, 110, 71, 16));
        lineEdit_Username = new QLineEdit(centralwidget);
        lineEdit_Username->setObjectName("lineEdit_Username");
        lineEdit_Username->setGeometry(QRect(190, 50, 113, 21));
        lineEdit_Password = new QLineEdit(centralwidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(190, 110, 113, 21));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(70, 190, 100, 32));
        pushButton_Register = new QPushButton(centralwidget);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setGeometry(QRect(240, 190, 100, 32));
        label_ErrorMessage = new QLabel(centralwidget);
        label_ErrorMessage->setObjectName("label_ErrorMessage");
        label_ErrorMessage->setGeometry(QRect(70, 160, 231, 16));
        LoginWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        LoginWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow2);
        statusbar->setObjectName("statusbar");
        LoginWindow2->setStatusBar(statusbar);

        retranslateUi(LoginWindow2);

        QMetaObject::connectSlotsByName(LoginWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow2)
    {
        LoginWindow2->setWindowTitle(QCoreApplication::translate("LoginWindow2", "LoginWindow2", nullptr));
        label_Username->setText(QCoreApplication::translate("LoginWindow2", "Username", nullptr));
        label_Password->setText(QCoreApplication::translate("LoginWindow2", "Password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("LoginWindow2", "Login", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("LoginWindow2", "Register", nullptr));
        label_ErrorMessage->setText(QCoreApplication::translate("LoginWindow2", "<html><head/><body><p><span style=\" color:#ff2600;\">Error: wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow2: public Ui_LoginWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW2_H
