#include "chef_opening.h"
#include "ui_chef_opening.h"
#include "mainwindow.h"
#include "global.h"
#include "QMessageBox"
#include "display_common.h"

#include<QPixmap>

chef_opening::chef_opening(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chef_opening)
{
    ui->setupUi(this);
    QPixmap pix(":/image/Login image/login img.png");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

chef_opening::~chef_opening()
{
    delete ui;
}

MainWindow *m4;

void chef_opening::on_back_pushButton_clicked()
{
    hide();
    m4=new MainWindow(this);
    m4->show();
}


void chef_opening::on_Chef_singIn_pushButton_clicked()
{
    int i,flag=0;
    for(i=0;i<total_chef;i++)
    {
        if(chef[i]->getName()==ui->Chef_username_lineEdit->text() && chef[i]->getPassword()==ui->Chef_pass_lineEdit->text())
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
        temp=4;
        position=i;
        hide();
        dis=new display_common(this);
        dis->resize(800,500);
        dis->show();
    }

}
