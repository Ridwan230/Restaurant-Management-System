#include "menu_customer.h"
#include "ui_menu_customer.h"
#include "mainwindow.h"
#include "customer.h"
#include "global.h"
#include<QPixmap>

menu_customer::menu_customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_customer)
{
    ui->setupUi(this);
}

menu_customer::~menu_customer()
{
    delete ui;
}

//int quantity_burger=0,quantity_fries=0,quantity_drinks=0;
//int total_cost=0;
void menu_customer::on_Burger_quantity_pos_pushButton_clicked()
{
    quantity_burger++;
    ui->Burger_quantity_label->setNum(quantity_burger);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

void menu_customer::on_Burger_quantity_neg_pushButton_clicked()
{
    quantity_burger--;
    if(quantity_burger<0)
    {
        quantity_burger=0;
    }
    ui->Burger_quantity_label->setNum(quantity_burger);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

void menu_customer::on_Fries_quantity_pos_pushButton_clicked()
{
    quantity_fries++;
    ui->Fries_quantity_label->setNum(quantity_fries);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

void menu_customer::on_Fries_quantity_neg_pushButton_clicked()
{
    quantity_fries--;
    if(quantity_fries<0)
    {
        quantity_fries=0;
    }
    ui->Fries_quantity_label->setNum(quantity_fries);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

void menu_customer::on_Drinks_quantity_pos_pushButton_clicked()
{
    quantity_drinks++;
    ui->Drinks_quantity_label->setNum(quantity_drinks);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

void menu_customer::on_Drinks_quantity_neg_pushButton_clicked()
{
    quantity_drinks--;
    if(quantity_drinks<0)
    {
        quantity_drinks=0;
    }
    ui->Drinks_quantity_label->setNum(quantity_drinks);
    total_cost=quantity_burger*200+quantity_fries*100+quantity_drinks*20;
    ui->total_label_1->setNum(total_cost);
}

MainWindow *m8;
void menu_customer::on_Back_pushButton_clicked()
{
    hide();
    m8=new MainWindow(this);
    m8->show();
}

void menu_customer::on_Burger_img_pushButton_clicked()
{
    QPixmap pix(":/Food_image/Burger.png");
    int w=ui->food_pic->width();
    int h=ui->food_pic->height();
    ui->food_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

void menu_customer::on_Fries_img_pushButton_clicked()
{
    QPixmap pix(":/Food_image/fries.png");
    int w=ui->food_pic->width();
    int h=ui->food_pic->height();
    ui->food_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

void menu_customer::on_Drinks_img_pushButton_clicked()
{
    QPixmap pix(":/Food_image/drinks.png");
    int w=ui->food_pic->width();
    int h=ui->food_pic->height();
    ui->food_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

void menu_customer::on_Confirm_pushButton_clicked()
{

    hide();
    menu_lst= new menu_last(this);
    menu_lst->resize(800,500);
    menu_lst->show();
}
