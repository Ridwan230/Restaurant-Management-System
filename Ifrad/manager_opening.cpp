#include "manager_opening.h"
#include "ui_manager_opening.h"

#include<QPixmap>
#include<QMessageBox>
#include<iostream>
#include<string>

Manager_opening::Manager_opening(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manager_opening)
{
    ui->setupUi(this);
    QPixmap pix(":/image/Login image/login img.png");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Manager_opening::~Manager_opening()
{
    delete ui;
}

void Manager_opening::on_Managerlogin_pushButton_clicked()
{
    QString default_username="test";
    QString default_password="test123";
    QString username=ui->Manager_username_lineEdit->text();
    QString password=ui->Manager_pass_lineEdit->text();
    if(username==default_username && password==default_password)
    {
        hide();
        manager_second_open= new manager_second(this);
        manager_second_open->resize(800,500);
        manager_second_open->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Incorrect Username or Password. Please Try Again");
    }
}
