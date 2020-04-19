#include "man_employee.h"
#include "ui_man_employee.h"

Man_Employee::Man_Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Man_Employee)
{
    ui->setupUi(this);
}

Man_Employee::~Man_Employee()
{
    delete ui;
}

void Man_Employee::on_add_chef_clicked()
{
    hide();
    addchef= new Add_chef(this);
    addchef->resize(800,500);
    addchef->show();
}

void Man_Employee::on_add_waiter_clicked()
{
    hide();
    addwaiter= new add_waiter(this);
    addwaiter->resize(800,500);
    addwaiter->show();
}
