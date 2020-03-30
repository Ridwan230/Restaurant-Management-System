#ifndef MANAGER_SECOND_H
#define MANAGER_SECOND_H

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

private:
    Ui::manager_second *ui;
};

#endif // MANAGER_SECOND_H
