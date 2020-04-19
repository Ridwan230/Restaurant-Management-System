#include "add_waiter.h"
#include "ui_add_waiter.h"

add_waiter::add_waiter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_waiter)
{
    ui->setupUi(this);
}

add_waiter::~add_waiter()
{
    delete ui;
}
