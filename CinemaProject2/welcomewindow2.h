#ifndef WELCOMEWINDOW2_H
#define WELCOMEWINDOW2_H

#include <QDialog>

namespace Ui {
class WelcomeWindow2;
}

class WelcomeWindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow2( QString username, int age, QWidget *parent = nullptr);
    ~WelcomeWindow2();

private slots:
    void on_pushButton_Logout_clicked();

private:
    Ui::WelcomeWindow2 *ui;
};

#endif // WELCOMEWINDOW2_H
