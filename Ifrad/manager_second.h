#ifndef MANAGER_SECOND_H
#define MANAGER_SECOND_H

#include "man_employee.h"
#include "menu_customer.h"
#include "display_common.h"
#include <QDialog>

namespace Ui {
class manager_second;
}

class manager_second : public QDialog
{
    Q_OBJECT

public:
    explicit manager_second(QWidget *parent = nullptr);
    ~manager_second();

private slots:

    void on_commandLinkButton_clicked();

    void on_Manager_emp_clicked();

    void on_back_pushButton_clicked();

    void on_Manager_chg_pass_clicked();

    void on_Manager_menu_clicked();

    void on_Manager_cus_clicked();

    void on_Manager_finances_clicked();

private:
    Ui::manager_second *ui;
    Man_Employee *manemployee;
    menu_customer *cus_menu;
    display_common *dis;
};

#endif // MANAGER_SECOND_H
