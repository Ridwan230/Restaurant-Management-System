#ifndef ADD_WAITER_H
#define ADD_WAITER_H

#include <QDialog>

namespace Ui {
class add_waiter;
}

class add_waiter : public QDialog
{
    Q_OBJECT

public:
    explicit add_waiter(QWidget *parent = nullptr);
    ~add_waiter();

private slots:
    void on_add_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::add_waiter *ui;
};

#endif // ADD_WAITER_H
