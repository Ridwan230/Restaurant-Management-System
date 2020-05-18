#include "menu_last.h"
#include "ui_menu_last.h"
#include "global.h"
#include "mainwindow.h"

menu_last::menu_last(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_last)
{
    ui->setupUi(this);
    if(quantity_burger>0)
    {
        ui->Burger_item->setText("Burger");
        ui->Burger_quantity->setNum(quantity_burger);
        ui->Burger_amount->setNum(quantity_burger*200);
    }
    if(quantity_fries>0)
    {
        ui->Fries_item->setText("Fries");
        ui->Fries_quantity->setNum(quantity_fries);
        ui->Fries_amount->setNum(quantity_fries*200);
    }
    if(quantity_drinks>0)
    {
        ui->Drinks_item->setText("Drinks");
        ui->Drinks_quantity->setNum(quantity_drinks);
        ui->Drinks_amount->setNum(quantity_drinks*200);
    }
    ui->total_amnt->setNum(total_cost);
}

menu_last::~menu_last()
{
    delete ui;
}

MainWindow *m7;
void menu_last::on_pushButton_clicked()   //confirm push_button
{
    hide();
    m7=new MainWindow(this);
    m7->show();
}
