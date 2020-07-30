#include "man_employee.h"
#include "ui_man_employee.h"
#include "manager_second.h"
#include "display_common.h"
#include "global.h"

manager_second *man_second;

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

void Man_Employee::on_pushButton_clicked()
{
    hide();
    man_second= new manager_second(this);
    man_second->resize(800,500);
    man_second->show();

}


void Man_Employee::on_chef_status_clicked()
{
    temp=2;
    hide();
    dis=new display_common(this);
    dis->resize(800,500);
    dis->show();
}

void Man_Employee::on_waiter_status_clicked()
{
    temp=3;
    hide();
    dis=new display_common(this);
    dis->resize(800,500);
    dis->show();
}
