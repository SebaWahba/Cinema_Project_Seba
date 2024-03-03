#include "loginwindow2.h"
#include "ui_loginwindow2.h"
#include "welcomewindow2.h"
#include "Users.h"
#include "registerwindow.h"
LoginWindow2::LoginWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow2)
{
    ui->setupUi(this);
    ui->label_ErrorMessage->setVisible(false);
}

LoginWindow2::~LoginWindow2()
{
    delete ui;
}

void LoginWindow2::on_pushButton_Login_clicked()
{
    for (int i=0; i<100;i++)
    {
        if ((usernames[i]==(ui->lineEdit_Username->text()))&&(passwords[i]==(ui->lineEdit_Password->text())))
        {
            hide();
            WelcomeWindow2* welcomeWindow=new WelcomeWindow2(usernames[i],ages[i],this);
            welcomeWindow->show();
            break;
        }
    }
    ui->label_ErrorMessage->setVisible(true);
}


void LoginWindow2::on_pushButton_Register_clicked()
{
    hide();
    RegisterWindow* registerWindow=new RegisterWindow(this);
    registerWindow->show();
}

