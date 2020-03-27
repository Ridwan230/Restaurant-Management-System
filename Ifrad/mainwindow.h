#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"customer.h"
#include"manager_opening.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Customer_PushButton_clicked();

    void on_Manager_PushButton_clicked();

private:
    Ui::MainWindow *ui;
    Customer *customer;
    Manager_opening *manager_opening;
};
#endif // MAINWINDOW_H
