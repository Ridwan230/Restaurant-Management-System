#include "waiter_opening.h"
#include "ui_waiter_opening.h"
#include "mainwindow.h"
#include "global.h"


#include<QPixmap>
#include<QMessageBox>

waiter_opening::waiter_opening(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waiter_opening)
{
    ui->setupUi(this);
    QPixmap pix(":/image/Login image/login img.png");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

waiter_opening::~waiter_opening()
{
    delete ui;
}

MainWindow *m3;

void waiter_opening::on_bcak_pushButton_clicked()
{
    hide();
    m3=new MainWindow(this);
    m3->show();
}

void waiter_opening::on_Waiter_login_pushbutton_clicked()
{
    int i,flag=0;
    for(i=0;i<total_waiter;i++)
    {
        if(waiter[i].getName()==ui->Waiter_username_lineEdit->text() && waiter[i].getPassword()==ui->Waiter_pass_lineEdit->text())
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        QMessageBox::warning(this,"Login","Incorrect Username or Password. Please Try Again");
    }
    else
    {
        QMessageBox::information(this,"Login","Sign in Successful");
    }
}
