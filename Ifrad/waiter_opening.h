#ifndef WAITER_OPENING_H
#define WAITER_OPENING_H

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

private:
    Ui::waiter_opening *ui;
};

#endif // WAITER_OPENING_H