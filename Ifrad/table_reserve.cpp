#include "table_reserve.h"
#include "ui_table_reserve.h"
#include "global.h"
#include "manager_second.h"

#include<QMessageBox>

table_reserve::table_reserve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::table_reserve)
{
    ui->setupUi(this);
    bool flag=false;
    for(int i=0;i<7;i++)
    {
        if(table_res[i]==true)
        {
            flag=true;
            ui->plainTextEdit->appendPlainText(QString::number(i));
        }
    }
    if(flag==false)
    {
        ui->plainTextEdit->appendPlainText("No tables booked\n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("Above tables are booked\n");
    }
}

table_reserve::~table_reserve()
{
    delete ui;
}

manager_second* m12;
void table_reserve::on_back_pushButton_clicked()
{
    ui->plainTextEdit->clear();
    hide();
    m12=new manager_second(this);
    m12->show();
}

void table_reserve::on_book_pushButton_clicked()
{
    if(table_res[ui->tableno_lineEdit->text().toInt()]==true)
    {
        QMessageBox::warning(this,"BOOKED!!!","Table already reserved");
    }
    else
    {
        table_res[ui->tableno_lineEdit->text().toInt()]=true;
    }

    ui->plainTextEdit->clear();
    bool flag=false;
    for(int i=0;i<7;i++)
    {
        if(table_res[i]==true)
        {
            flag=true;
            ui->plainTextEdit->appendPlainText(QString::number(i));
        }
    }
    if(flag==false)
    {
        ui->plainTextEdit->appendPlainText("No tables booked\n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("Above tables are booked\n");
    }
}
