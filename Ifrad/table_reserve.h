#ifndef TABLE_RESERVE_H
#define TABLE_RESERVE_H

#include <QDialog>

namespace Ui {
class table_reserve;
}

class table_reserve : public QDialog
{
    Q_OBJECT

public:
    explicit table_reserve(QWidget *parent = nullptr);
    ~table_reserve();

private slots:
    void on_back_pushButton_clicked();

    void on_book_pushButton_clicked();

private:
    Ui::table_reserve *ui;
};

#endif // TABLE_RESERVE_H
