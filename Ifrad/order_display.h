#ifndef ORDER_DISPLAY_H
#define ORDER_DISPLAY_H

#include <QDialog>

namespace Ui {
class order_display;
}

class order_display : public QDialog
{
    Q_OBJECT

public:
    explicit order_display(QWidget *parent = nullptr);
    ~order_display();

private slots:

    void on_back_pushButton_clicked();

private:
    Ui::order_display *ui;
};

#endif // ORDER_DISPLAY_H
