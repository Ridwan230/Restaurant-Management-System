#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>

namespace Ui {
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

private slots:
    void on_Cus_nameline_returnPressed();

    void on_back_pushButton_clicked();

private:
    Ui::Customer *ui;
};

#endif // CUSTOMER_H
