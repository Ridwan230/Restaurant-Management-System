#ifndef MENU_CUSTOMER_H
#define MENU_CUSTOMER_H

#include <QDialog>

#include "menu_last.h"

namespace Ui {
class menu_customer;
}

class menu_customer : public QDialog
{
    Q_OBJECT

public:
    //int quantity_burger,quantity_fries,quantity_drinks,total_cost;
    //menu_customer(int i=0,int j=0,int k=0,int p=0) : quantity_burger(i),quantity_fries(j),quantity_drinks(k),total_cost(p) {}
    explicit menu_customer(QWidget *parent = nullptr);
    ~menu_customer();

private slots:
    void on_Burger_quantity_pos_pushButton_clicked();

    void on_Burger_quantity_neg_pushButton_clicked();

    void on_Fries_quantity_pos_pushButton_clicked();

    void on_Fries_quantity_neg_pushButton_clicked();

    void on_Drinks_quantity_pos_pushButton_clicked();

    void on_Drinks_quantity_neg_pushButton_clicked();

    void on_Back_pushButton_clicked();

    void on_Burger_img_pushButton_clicked();

    void on_Fries_img_pushButton_clicked();

    void on_Drinks_img_pushButton_clicked();

    void on_Confirm_pushButton_clicked();

private:
    Ui::menu_customer *ui;
    menu_last *menu_lst;
};

#endif // MENU_CUSTOMER_H
