#include "customer.h"
#include "ui_customer.h"
#include "global.h"

Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
}

Customer::~Customer()
{
    delete ui;
}

void Customer::on_Cus_nameline_returnPressed()
{

}
