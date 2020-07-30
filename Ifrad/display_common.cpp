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
        QString name=customer[0]->getName();
        QString phn=customer[0]->getPhone_number();
        QString email=customer[0]->getEmail();
        ui->plainTextEdit->setPlainText("Name: ");
        ui->plainTextEdit->appendPlainText(name);
        ui->plainTextEdit->appendPlainText("Phone: ");
        ui->plainTextEdit->appendPlainText(phn);
        ui->plainTextEdit->appendPlainText("Email: ");
        ui->plainTextEdit->appendPlainText(email);
        ui->plainTextEdit->appendPlainText("\n");
        for(int i=1;i<total_customer;i++)
        {
            name=customer[i]->getName();
            phn=customer[i]->getPhone_number();
            email=customer[i]->getEmail();
            ui->plainTextEdit->appendPlainText("Name: ");
            ui->plainTextEdit->appendPlainText(name);
            ui->plainTextEdit->appendPlainText("Phone: ");
            ui->plainTextEdit->appendPlainText(phn);
            ui->plainTextEdit->appendPlainText("Email: ");
            ui->plainTextEdit->appendPlainText(email);
            ui->plainTextEdit->appendPlainText("\n");
        }
    }
    else if(temp==2)
    {
        QString name=chef[0]->getName();
        int id=chef[0]->getID();
        QString id1=QString::number(id);
        ui->plainTextEdit->setPlainText("Name: ");
        ui->plainTextEdit->appendPlainText(name);
        ui->plainTextEdit->appendPlainText("ID: ");
        ui->plainTextEdit->appendPlainText(id1);
        ui->plainTextEdit->appendPlainText("\n");
        for(int i=1;i<total_chef;i++)
        {
            name=chef[i]->getName();
            id=chef[i]->getID();
            id1=QString::number(id);
            ui->plainTextEdit->appendPlainText("Name: ");
            ui->plainTextEdit->appendPlainText(name);
            ui->plainTextEdit->appendPlainText("Phone: ");
            ui->plainTextEdit->appendPlainText(id1);
            ui->plainTextEdit->appendPlainText("\n");
        }
    }
    else if(temp==3)
    {
        QString name=waiter[0]->getName();
        int id=waiter[0]->getID();
        QString id1=QString::number(id);
        int t=waiter[0]->getTable_number();
        QString tab=QString::number(t);
        ui->plainTextEdit->setPlainText("Name: ");
        ui->plainTextEdit->appendPlainText(name);
        ui->plainTextEdit->appendPlainText("ID: ");
        ui->plainTextEdit->appendPlainText(id1);
        ui->plainTextEdit->appendPlainText("Table no: ");
        ui->plainTextEdit->appendPlainText(tab);
        ui->plainTextEdit->appendPlainText("\n");
        for(int i=1;i<total_waiter;i++)
        {
            name=waiter[i]->getName();
            id=waiter[i]->getID();
            id1=QString::number(id);
            t=waiter[i]->getTable_number();
            tab=QString::number(t);
            ui->plainTextEdit->appendPlainText("Name: ");
            ui->plainTextEdit->appendPlainText(name);
            ui->plainTextEdit->appendPlainText("ID: ");
            ui->plainTextEdit->appendPlainText(id1);
            ui->plainTextEdit->appendPlainText("Table no: ");
            ui->plainTextEdit->appendPlainText(tab);
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
    hide();
    m9=new MainWindow(this);
    m9->show();
}
