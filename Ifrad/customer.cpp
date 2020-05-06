#include "customer.h"
#include "ui_customer.h"
#include "global.h"
#include "mainwindow.h"

MainWindow *m1;

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

void Customer::on_back_pushButton_clicked()
{
    hide();
    m1=new MainWindow(this);
    m1->show();
}
