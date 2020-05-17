#ifndef MENU_CUSTOMER_H
#define MENU_CUSTOMER_H

#include <QDialog>

namespace Ui {
class menu_customer;
}

class menu_customer : public QDialog
{
    Q_OBJECT

public:
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

private:
    Ui::menu_customer *ui;
};

#endif // MENU_CUSTOMER_H
