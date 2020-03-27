#include "manager_opening.h"
#include "ui_manager_opening.h"

#include<QPixmap>

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
