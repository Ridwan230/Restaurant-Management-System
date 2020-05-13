#ifndef MAN_EMPLOYEE_H
#define MAN_EMPLOYEE_H

#include"add_chef.h"
#include"add_waiter.h"

#include <QDialog>

namespace Ui {
class Man_Employee;
}

class Man_Employee : public QDialog
{
    Q_OBJECT

public:
    explicit Man_Employee(QWidget *parent = nullptr);
    ~Man_Employee();

private slots:
    void on_add_chef_clicked();

    void on_add_waiter_clicked();

    void on_pushButton_clicked();

private:
    Ui::Man_Employee *ui;
    Add_chef *addchef;
    add_waiter *addwaiter;
};

#endif // MAN_EMPLOYEE_H
