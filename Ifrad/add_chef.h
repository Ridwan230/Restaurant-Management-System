#ifndef ADD_CHEF_H
#define ADD_CHEF_H

#include <QDialog>

namespace Ui {
class Add_chef;
}

class Add_chef : public QDialog
{
    Q_OBJECT

public:
    explicit Add_chef(QWidget *parent = nullptr);
    ~Add_chef();

private slots:
    void on_Add_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Add_chef *ui;
};

#endif // ADD_CHEF_H
