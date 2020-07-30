#ifndef DISPLAY_COMMON_H
#define DISPLAY_COMMON_H

#include <QDialog>

namespace Ui {
class display_common;
}

class display_common : public QDialog
{
    Q_OBJECT

public:
    explicit display_common(QWidget *parent = nullptr);
    ~display_common();

private slots:
    void on_Back_clicked();

private:
    Ui::display_common *ui;
};

#endif // DISPLAY_COMMON_H
