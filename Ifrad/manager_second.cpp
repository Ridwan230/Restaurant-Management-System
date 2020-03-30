#include "manager_second.h"
#include "ui_manager_second.h"

manager_second::manager_second(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager_second)
{
    ui->setupUi(this);
}

manager_second::~manager_second()
{
    delete ui;
}
