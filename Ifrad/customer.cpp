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

void Customer::on_Menu_PushButton_clicked()
{

    //OPERATIONS FOR MENU CLASS   (Ridwan add korse)
        int i,flag=0;
        for(i=0;i<total_customer;i++)
        {
            if(customer[i]->getName()==ui->Cus_nameline->text())
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            customer[total_customer]=new Customer_info();
            customer[total_customer]->setName(ui->Cus_nameline->text());
            customer[total_customer]->setEmail(ui->lineEdit_3->text());
            customer[total_customer]->setPhone_number(ui->Cus_phoneline->text());
            total_customer++;
            ui->Cus_nameline->clear();
            ui->lineEdit_3->clear();
            ui->Cus_phoneline->clear();
        }


     //OPERATIONS FOR CUSTOMER_MENU CLASS    (Ifrad add korse)
        hide();
        cus_menu= new menu_customer(this);
        cus_menu->resize(800,500);
        cus_menu->show();
}
