#include "manager_second.h"
#include "ui_manager_second.h"
#include "manager_opening.h"

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

void manager_second::on_commandLinkButton_clicked()
{

}

void manager_second::on_Manager_emp_clicked()
{
    hide();
    manemployee= new Man_Employee(this);
    manemployee->resize(800,500);
    manemployee->show();
}

Manager_opening *m6;

void manager_second::on_back_pushButton_clicked()
{
    hide();
    m6=new Manager_opening(this);
    m6->show();
}

void manager_second::on_Manager_chg_pass_clicked()
{

}
