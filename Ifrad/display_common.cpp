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
