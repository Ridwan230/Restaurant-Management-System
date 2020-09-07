#ifndef WAITER_OPENING_H
#define WAITER_OPENING_H

#include "display_common.h"
#include "order_display.h"

#include <QDialog>

namespace Ui {
class waiter_opening;
}

class waiter_opening : public QDialog
{
    Q_OBJECT

public:
    explicit waiter_opening(QWidget *parent = nullptr);
    ~waiter_opening();

private slots:
    void on_back_pushButton_clicked();

    void on_Waiter_login_pushbutton_clicked();

private:
    Ui::waiter_opening *ui;
    display_common *dis;
    order_display *ord;
};

#endif // WAITER_OPENING_H
