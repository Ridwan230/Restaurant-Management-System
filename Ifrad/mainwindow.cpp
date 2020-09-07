#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "global.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    //Chef Preset

    chef[0]=new Chef_info();
    chef[0]->setID(1111);
    chef[0]->setPassword("abcd1");
    chef[0]->setName("Harry");
    chef[0]->setSalary(30000);

    chef[1]=new Chef_info();
    chef[1]->setID(2222);
    chef[1]->setPassword("abcd2");
    chef[1]->setName("Potter");
    chef[1]->setSalary(29000);

    //Waiter Preset

    waiter[0]=new Waiter_info();
    waiter[0]->setID(3333);
    waiter[0]->setPassword("abcd3");
    waiter[0]->setName("Stark");
    waiter[0]->setSalary(15000);
    waiter[0]->setTable_number(1);

    waiter[1]=new Waiter_info();
    waiter[1]->setID(4444);
    waiter[1]->setPassword("abcd4");
    waiter[1]->setName("Bruce");
    waiter[1]->setSalary(14000);
    waiter[1]->setTable_number(2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Customer_PushButton_clicked()
{
    hide();
    customer= new Customer(this);
    customer->resize(800,500);
    customer->show();
}

void MainWindow::on_Manager_PushButton_clicked()
{
    hide();
    manager_opening= new Manager_opening(this);
    manager_opening->resize(800,500);
    manager_opening->show();
}

void MainWindow::on_Waiter_PushButton_clicked()
{
    hide();
    waiter_open= new waiter_opening(this);
    waiter_open->resize(800,500);
    waiter_open->show();
}

void MainWindow::on_Chef_PushButton_clicked()
{
    hide();
    chef_open= new chef_opening(this);
    chef_open->resize(800,500);
    chef_open->show();
}
