#ifndef MANAGER_OPENING_H
#define MANAGER_OPENING_H

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

private:
    Ui::Manager_opening *ui;
};

#endif // MANAGER_OPENING_H
