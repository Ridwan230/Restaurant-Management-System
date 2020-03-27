#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Customer_PushButton_clicked()
{
    hide();
    customer= new Customer(this);
    customer->resize(800,500);
    customer->show();
}

void MainWindow::on_Manager_PushButton_clicked()
{
    hide();
    manager_opening= new Manager_opening(this);
    manager_opening->resize(800,500);
    manager_opening->show();
}
