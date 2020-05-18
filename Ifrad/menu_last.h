#ifndef MENU_LAST_H
#define MENU_LAST_H

#include <QDialog>

//#include"menu_customer.h"

namespace Ui {
class menu_last;
}

class menu_last : public QDialog
{
    Q_OBJECT

public:
    explicit menu_last(QWidget *parent = nullptr);
    ~menu_last();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu_last *ui;
};

#endif // MENU_LAST_H
