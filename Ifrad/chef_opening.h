#ifndef CHEF_OPENING_H
#define CHEF_OPENING_H

#include <QDialog>

namespace Ui {
class chef_opening;
}

class chef_opening : public QDialog
{
    Q_OBJECT

public:
    explicit chef_opening(QWidget *parent = nullptr);
    ~chef_opening();

private slots:
    void on_back_pushButton_clicked();

    void on_Chef_singIn_pushButton_clicked();

private:
    Ui::chef_opening *ui;
};

#endif // CHEF_OPENING_H
