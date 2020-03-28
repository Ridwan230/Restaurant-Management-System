#include "waiter_opening.h"
#include "ui_waiter_opening.h"

#include<QPixmap>

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
