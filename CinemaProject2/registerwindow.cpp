#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "welcomewindow2.h"
#include"Users.h"
RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_ageerror->setVisible(false);
    ui->label_alreadyexisting->setVisible(false);
    ui->label_fillederror->setVisible(false);
    ui->label_nomatch->setVisible(false);
}
RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButton_register_clicked()
{
    bool flag=false;
    ui->label_ageerror->setVisible(false);
    ui->label_alreadyexisting->setVisible(false);
    ui->label_fillederror->setVisible(false);
    ui->label_nomatch->setVisible(false);
    QString username,password,month,day,year,retype;
    bool male,female,user,admin,action,comedy,romance,other,drama,horror;
    int DAY,YEAR;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    month=ui->comboBox_month->currentText();
    day=ui->lineEdit_day->text();
    year=ui->lineEdit_year->text();
    DAY=day.toInt();
    YEAR=year.toInt();
    retype=ui->lineEdit_retype_password->text();
    male=ui->radioButton_male->isChecked();
    female=ui->radioButton_female->isChecked();
    user=ui->radioButton_user->isChecked();
    admin=ui->radioButton_admin->isChecked();
    action=ui->checkBox_action->isChecked();
    comedy=ui->checkBox_comedy->isChecked();
    romance=ui->checkBox_romance->isChecked();
    drama=ui->checkBox_drama->isChecked();
    other=ui->checkBox_other->isChecked();
    horror=ui->checkBox_horror->isChecked();
    for(int i=0;i<100;i++)
    {
        if(usernames[i]==username)
        {
            ui->label_alreadyexisting->setVisible(true);
            flag=true;
            break;
        }
    }
    if(password!=retype)
    {
        ui->label_nomatch->setVisible(true);
        flag=true;
    }
    if((2024-YEAR)<12)
    {
        ui->label_ageerror->setVisible(true);
        flag=true;
    }
    if ((username=="")|(password=="")|(month=="")|(day=="")|(year=="")|(retype=="")|(not action && not comedy && not drama && not romance && not other && not horror)|(not user && not admin)|(not male && not female))
    {
        ui->label_fillederror->setVisible(true);
        flag=true;
    }
    if(flag==false)
    {
        for (int i=0;i<100;i++)
        {
            if(usernames[i]=="")
            {
                usernames[i]=username;
                passwords[i]=password;
                ages[i]=2024-YEAR;
                usersCount++;
                hide();
                WelcomeWindow2*welcomewindow3=new WelcomeWindow2(usernames[i],ages[i],this);
                welcomewindow3->show();
            }
        }
    }

}

