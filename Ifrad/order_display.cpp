#include "order_display.h"
#include "ui_order_display.h"
#include "mainwindow.h"
#include "global.h"

order_display::order_display(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::order_display)
{
    ui->setupUi(this);

    if(temp==4)
    {
        QHash<QString,QString> v;
        if(!chef_queue.empty())
        {
            chef[position]->set_order(chef_queue.head());
            chef_queue.dequeue();
        }
        People* ppl;
        ppl=chef[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("PERSONAL INFORMATION: ");
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n\n");

        ui->plainTextEdit->appendPlainText("ORDER INFORMATION: ");
        ui->plainTextEdit->appendPlainText(v["current_order"]);
    }
    else if(temp==5)
    {
        QHash<QString,QString> v;
        if(!waiter_queue.empty())
        {
            waiter[position]->set_order(waiter_queue.head());
            waiter_queue.dequeue();
        }
        People* ppl;
        ppl=waiter[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("PERSONAL INFORMATION: ");
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);

        // ui->plainTextEdit->appendPlainText("Table no: "+v["table_number"]);

        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n\n");

        ui->plainTextEdit->appendPlainText("ORDER INFORMATION: ");
        ui->plainTextEdit->appendPlainText(v["current_order"]);
    }
}

order_display::~order_display()
{
    delete ui;
}


MainWindow* m10;
void order_display::on_back_pushButton_clicked()
{
    hide();
    m10=new MainWindow(this);
    m10->show();
}

void order_display::on_order_complete_pushButton_clicked()
{
    if(temp==4)
    {
        waiter_queue.enqueue(chef[position]->get_order());
        chef[position]->delete_order();
        ui->plainTextEdit->clear();
        QHash<QString,QString> v;
        if(!chef_queue.empty())
        {
            chef[position]->set_order(chef_queue.head());
            chef_queue.dequeue();
        }
        People* ppl;
        ppl=chef[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("PERSONAL INFORMATION: ");
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n\n");

        ui->plainTextEdit->appendPlainText("ORDER INFORMATION: ");
        ui->plainTextEdit->appendPlainText(v["current_order"]);
    }
    else if(temp==5)
    {
        waiter[position]->delete_order();
        ui->plainTextEdit->clear();
        QHash<QString,QString> v;
        if(!chef_queue.empty())
        {
            chef[position]->set_order(chef_queue.head());
            chef_queue.dequeue();
        }
        People* ppl;
        ppl=chef[position];
        v=ppl->display();
        ui->plainTextEdit->appendPlainText("PERSONAL INFORMATION: ");
        ui->plainTextEdit->appendPlainText("Name: "+v["name"]);
        ui->plainTextEdit->appendPlainText("ID: "+v["id"]);
        ui->plainTextEdit->appendPlainText("Salary: "+v["salary"]);
        ui->plainTextEdit->appendPlainText("\n\n");

        ui->plainTextEdit->appendPlainText("ORDER INFORMATION: ");
        ui->plainTextEdit->appendPlainText(v["current_order"]);
    }
}
