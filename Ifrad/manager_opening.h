#ifndef MANAGER_OPENING_H
#define MANAGER_OPENING_H

#include"manager_second.h"

#include <QDialog>

namespace Ui {
class Manager_opening;
}

class Manager_opening : public QDialog
{
    Q_OBJECT

public:
    explicit Manager_opening(QWidget *parent = nullptr);
    ~Manager_opening();

private slots:
    void on_Managerlogin_pushButton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::Manager_opening *ui;
    manager_second *manager_second_open;
};

#endif // MANAGER_OPENING_H
