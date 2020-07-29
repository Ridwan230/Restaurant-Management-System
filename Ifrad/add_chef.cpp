#include "add_chef.h"
#include "ui_add_chef.h"
#include "global.h"
#include "man_employee.h"

Man_Employee *man_employee;

Add_chef::Add_chef(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_chef)
{
    ui->setupUi(this);
}

Add_chef::~Add_chef()
{
    delete ui;
}

void Add_chef::on_Add_pushButton_clicked()
{
    chef[total_chef]=new Chef_info();
    chef[total_chef]->setID(ui->chef_id_lineEdit->text().toInt());
    chef[total_chef]->setPassword(ui->lineEdit_password->text());
    chef[total_chef]->setName(ui->Chef_name_lineEdit->text());
    total_chef++;
    ui->chef_id_lineEdit->clear();
    ui->Chef_name_lineEdit->clear();
    ui->lineEdit_password->clear();
}

void Add_chef::on_pushButton_clicked()
{
    hide();
    man_employee= new Man_Employee(this);
    man_employee->resize(800,500);
    man_employee->show();
}
