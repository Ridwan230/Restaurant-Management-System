#include "add_chef.h"
#include "ui_add_chef.h"

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
