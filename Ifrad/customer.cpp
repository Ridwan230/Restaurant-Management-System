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
    for(int i=1;i<7;i++)
    {
        if(table_res[i]==false)
        {
            ui->comboBox->addItem(QString::number(i));
        }
    }
    ui->comboBox->setCurrentIndex(-1);
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
            if(customer[i]->getPhone_number()==ui->Cus_phoneline->text())
            {
                current_customer=i;
                temp1=1;
                flag=1;
            }
        }
        if(flag==0)
        {
            customer[total_customer]=new Customer_info();
            customer[total_customer]->setName(ui->Cus_nameline->text());
            customer[total_customer]->setEmail(ui->lineEdit_3->text());
            customer[total_customer]->setPhone_number(ui->Cus_phoneline->text());
            customer[total_customer]->setID(total_customer+1);
            current_customer=i;
            total_customer++;
            ui->Cus_nameline->clear();
            ui->lineEdit_3->clear();
            ui->Cus_phoneline->clear();
        }
        table_number=ui->comboBox->currentText().toInt();


     //OPERATIONS FOR CUSTOMER_MENU CLASS    (Ifrad add korse)
        customer_tableno=ui->comboBox->currentText().toInt();

        hide();
        cus_menu= new menu_customer(this);
        cus_menu->resize(800,500);
        cus_menu->show();
}
