#include "add_chef.h"
#include "ui_add_chef.h"
#include "global.h"

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
    chef[total_chef].setID(ui->chef_id_lineEdit->text().toInt());
    chef[total_chef].setPassword(ui->lineEdit_password->text());
    chef[total_chef].setName(ui->Chef_name_lineEdit->text());
    total_chef++;
}
