#include "welcomewindow2.h"
#include "ui_welcomewindow2.h"
#include "loginwindow2.h"
#include <QPixmap>
WelcomeWindow2::WelcomeWindow2(QString username,int age,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow2)
{
    ui->setupUi(this);
    QString Age;
    Age=QString::number(age);
    ui->label_hello->setText("hello "+username+" "+Age);
    QPixmap pix (":/new/prefix1/image1.jpeg");
    int w = ui->label_image->width();
    int h =ui->label_image->height();
    ui->label_image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

WelcomeWindow2::~WelcomeWindow2()
{
    delete ui;
}

void WelcomeWindow2::on_pushButton_Logout_clicked()
{
    hide();
    LoginWindow2* loginwindow=new LoginWindow2(this);
    loginwindow->show();
}

