#include "add_waiter.h"
#include "ui_add_waiter.h"
#include "global.h"

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
    waiter[total_waiter].setPassword(ui->waiter_password->text());
    waiter[total_waiter].setID(ui->waiter_id_lineEdit->text().toInt());
    waiter[total_waiter].setTable_number(ui->waiter_table_lineEdit->text().toInt());
    waiter[total_waiter].setName(ui->waiter_name_lineEdit->text());
    total_waiter++;
}
