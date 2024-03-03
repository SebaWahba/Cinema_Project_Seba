/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLabel *label_retype_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_retype_password;
    QLabel *label_alreadyexisting;
    QLabel *label_nomatch;
    QGroupBox *groupBox_DOB;
    QComboBox *comboBox_month;
    QLineEdit *lineEdit_day;
    QLineEdit *lineEdit_year;
    QLabel *label_month;
    QLabel *label_day;
    QLabel *label_year;
    QLabel *label_ageerror;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QGroupBox *groupBox_acctype;
    QRadioButton *radioButton_user;
    QRadioButton *radioButton_admin;
    QGroupBox *groupBox_genres;
    QCheckBox *checkBox_action;
    QCheckBox *checkBox_comedy;
    QCheckBox *checkBox_romance;
    QCheckBox *checkBox_drama;
    QCheckBox *checkBox_horror;
    QCheckBox *checkBox_other;
    QPushButton *pushButton_register;
    QLabel *label_fillederror;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(829, 714);
        label_username = new QLabel(RegisterWindow);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(70, 90, 81, 16));
        label_password = new QLabel(RegisterWindow);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(70, 150, 81, 16));
        label_retype_password = new QLabel(RegisterWindow);
        label_retype_password->setObjectName("label_retype_password");
        label_retype_password->setGeometry(QRect(70, 210, 121, 16));
        lineEdit_username = new QLineEdit(RegisterWindow);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(200, 90, 113, 21));
        lineEdit_password = new QLineEdit(RegisterWindow);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(200, 150, 113, 21));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_retype_password = new QLineEdit(RegisterWindow);
        lineEdit_retype_password->setObjectName("lineEdit_retype_password");
        lineEdit_retype_password->setGeometry(QRect(200, 210, 113, 21));
        lineEdit_retype_password->setEchoMode(QLineEdit::Password);
        label_alreadyexisting = new QLabel(RegisterWindow);
        label_alreadyexisting->setObjectName("label_alreadyexisting");
        label_alreadyexisting->setGeometry(QRect(400, 90, 161, 21));
        label_nomatch = new QLabel(RegisterWindow);
        label_nomatch->setObjectName("label_nomatch");
        label_nomatch->setGeometry(QRect(400, 210, 181, 16));
        groupBox_DOB = new QGroupBox(RegisterWindow);
        groupBox_DOB->setObjectName("groupBox_DOB");
        groupBox_DOB->setGeometry(QRect(70, 270, 371, 131));
        comboBox_month = new QComboBox(groupBox_DOB);
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->setObjectName("comboBox_month");
        comboBox_month->setGeometry(QRect(20, 60, 103, 32));
        lineEdit_day = new QLineEdit(groupBox_DOB);
        lineEdit_day->setObjectName("lineEdit_day");
        lineEdit_day->setGeometry(QRect(140, 60, 91, 21));
        lineEdit_year = new QLineEdit(groupBox_DOB);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setGeometry(QRect(270, 60, 71, 21));
        label_month = new QLabel(groupBox_DOB);
        label_month->setObjectName("label_month");
        label_month->setGeometry(QRect(30, 30, 58, 16));
        label_day = new QLabel(groupBox_DOB);
        label_day->setObjectName("label_day");
        label_day->setGeometry(QRect(140, 30, 58, 16));
        label_year = new QLabel(groupBox_DOB);
        label_year->setObjectName("label_year");
        label_year->setGeometry(QRect(270, 30, 58, 16));
        label_ageerror = new QLabel(RegisterWindow);
        label_ageerror->setObjectName("label_ageerror");
        label_ageerror->setGeometry(QRect(470, 330, 141, 16));
        groupBox_gender = new QGroupBox(RegisterWindow);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(70, 410, 141, 111));
        radioButton_male = new QRadioButton(groupBox_gender);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(10, 30, 99, 20));
        radioButton_female = new QRadioButton(groupBox_gender);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(10, 70, 99, 20));
        groupBox_acctype = new QGroupBox(RegisterWindow);
        groupBox_acctype->setObjectName("groupBox_acctype");
        groupBox_acctype->setGeometry(QRect(270, 410, 171, 111));
        radioButton_user = new QRadioButton(groupBox_acctype);
        radioButton_user->setObjectName("radioButton_user");
        radioButton_user->setGeometry(QRect(10, 30, 99, 20));
        radioButton_admin = new QRadioButton(groupBox_acctype);
        radioButton_admin->setObjectName("radioButton_admin");
        radioButton_admin->setGeometry(QRect(10, 70, 99, 20));
        groupBox_genres = new QGroupBox(RegisterWindow);
        groupBox_genres->setObjectName("groupBox_genres");
        groupBox_genres->setGeometry(QRect(60, 530, 311, 131));
        checkBox_action = new QCheckBox(groupBox_genres);
        checkBox_action->setObjectName("checkBox_action");
        checkBox_action->setGeometry(QRect(20, 30, 85, 20));
        checkBox_comedy = new QCheckBox(groupBox_genres);
        checkBox_comedy->setObjectName("checkBox_comedy");
        checkBox_comedy->setGeometry(QRect(20, 60, 85, 20));
        checkBox_romance = new QCheckBox(groupBox_genres);
        checkBox_romance->setObjectName("checkBox_romance");
        checkBox_romance->setGeometry(QRect(20, 100, 85, 20));
        checkBox_drama = new QCheckBox(groupBox_genres);
        checkBox_drama->setObjectName("checkBox_drama");
        checkBox_drama->setGeometry(QRect(190, 30, 85, 20));
        checkBox_horror = new QCheckBox(groupBox_genres);
        checkBox_horror->setObjectName("checkBox_horror");
        checkBox_horror->setGeometry(QRect(190, 60, 85, 20));
        checkBox_other = new QCheckBox(groupBox_genres);
        checkBox_other->setObjectName("checkBox_other");
        checkBox_other->setGeometry(QRect(190, 100, 85, 20));
        pushButton_register = new QPushButton(RegisterWindow);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(70, 680, 100, 32));
        label_fillederror = new QLabel(RegisterWindow);
        label_fillederror->setObjectName("label_fillederror");
        label_fillederror->setGeometry(QRect(210, 680, 161, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label_username->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        label_retype_password->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        label_alreadyexisting->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">* Already Existing</span></p></body></html>", nullptr));
        label_nomatch->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">* Not Matching</span></p></body></html>", nullptr));
        groupBox_DOB->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        comboBox_month->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBox_month->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBox_month->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBox_month->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBox_month->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBox_month->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBox_month->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBox_month->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBox_month->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBox_month->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBox_month->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBox_month->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        label_month->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        label_day->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_year->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        label_ageerror->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">* Age is less than 12</span></p></body></html>", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButton_male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_acctype->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButton_user->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_genres->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBox_action->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBox_comedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_horror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBox_other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButton_register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        label_fillederror->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">* All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
