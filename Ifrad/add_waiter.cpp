#include "add_waiter.h"
#include "ui_add_waiter.h"
#include "global.h"
#include "man_employee.h"

Man_Employee *man_employee2;

add_waiter::add_waiter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_waiter)
{
    ui->setupUi(this);
}

add_waiter::~add_waiter()
{
    delete ui;
}

void add_waiter::on_add_pushButton_clicked()
{
    waiter[total_waiter]=new Waiter_info();
    waiter[total_waiter]->setPassword(ui->waiter_password->text());
    waiter[total_waiter]->setID(ui->waiter_id_lineEdit->text().toInt());
    waiter[total_waiter]->setTable_number(ui->waiter_table_lineEdit->text().toInt());
    waiter[total_waiter]->setName(ui->waiter_name_lineEdit->text());
    waiter[total_waiter]->setSalary(ui->lineEdit_salary->text().toInt());
    total_waiter++;
    ui->waiter_password->clear();
    ui->waiter_id_lineEdit->clear();
    ui->waiter_name_lineEdit->clear();
    ui->waiter_table_lineEdit->clear();
    ui->lineEdit_salary->clear();
}

void add_waiter::on_pushButton_clicked()
{
    hide();
    man_employee2= new Man_Employee(this);
    man_employee2->resize(800,500);
    man_employee2->show();
}
