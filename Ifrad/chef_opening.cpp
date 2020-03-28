#include "chef_opening.h"
#include "ui_chef_opening.h"

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
