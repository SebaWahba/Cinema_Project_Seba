#ifndef LOGINWINDOW2_H
#define LOGINWINDOW2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow2;
}
QT_END_NAMESPACE

class LoginWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow2(QWidget *parent = nullptr);
    ~LoginWindow2();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Register_clicked();

private:
    Ui::LoginWindow2 *ui;
};
#endif // LOGINWINDOW2_H
