#include "display_common.h"
#include "ui_display_common.h"
#include "mainwindow.h"
#include "global.h"

display_common::display_common(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::display_common)
{
    ui->setupUi(this);
    if(temp==1 && total_customer>0)
    {
        for(int i=0;i<total_customer;i++)
        {
            QHash<QString,QString> v;
            People* ppl;
            ppl=customer[i];
            v=ppl->display();
            ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
            ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
            ui->plainTextEdit->appendPlainText("Phone Number: "+v["phone_number"]);
            ui->plainTextEdit->appendPlainText("Email: "+v["Email"]);
            ui->plainTextEdit->appendPlainText("Last Order: "+v["last_order"]);
            ui->plainTextEdit->appendPlainText("Total Purchase: "+v["total_purchase"]);
            ui->plainTextEdit->appendPlainText("\n");

        }
    }
    else if(temp==2)
    {
        for(int i=0;i<total_chef;i++)
        {
            QHash<QString,QString> v;
            People* ppl;
            ppl=chef[i];
            v=ppl->display();
            ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
            ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
            ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
            ui->plainTextEdit->appendPlainText("\n");

        }
    }
    else if(temp==3)
    {
        for(int i=0;i<total_waiter;i++)
        {
            QHash<QString,QString> v;
            People* ppl;
            ppl=waiter[i];
            v=ppl->display();
            ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
            ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
            ui->plainTextEdit->appendPlainText("Table no: "+v["table_number"]);
            ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
            ui->plainTextEdit->appendPlainText("\n");

        }
    }
    else if(temp==4)
    {
        QHash<QString,QString> v;
        People* ppl;
        ppl=chef[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n");
    }
    else if(temp==5)
    {
        QHash<QString,QString> v;
        People* ppl;
        ppl=waiter[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
        ui->plainTextEdit->appendPlainText("Table no: "+v["table_number"]);
        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n");
    }
    else if(temp==6)
    {
        ui->plainTextEdit->appendPlainText("Total Amount Sold: "+QString::number(daily_cost));
        ui->plainTextEdit->appendPlainText("Total Burgers Sold: "+QString::number(total_burger));
        ui->plainTextEdit->appendPlainText("Total Fries Sold: "+QString::number(total_fries));
        ui->plainTextEdit->appendPlainText("Total Drinks Sold: "+QString::number(total_drinks));
    }
}

display_common::~display_common()
{
    delete ui;
}

MainWindow* m9;
void display_common::on_Back_clicked()
{
    ui->plainTextEdit->clear();
    hide();
    m9=new MainWindow(this);
    m9->show();
}
