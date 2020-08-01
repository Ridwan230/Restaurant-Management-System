#ifndef WAITER_INFO_H
#define WAITER_INFO_H
#include "people.h"


class Waiter_info : public People
{
private:
    QString password;
    int table_number;
    int salary;
public:
    Waiter_info();
    Waiter_info(int x, QString y, float z, QString s, int temp_table_num);
    void setPassword(QString s);
    QString getPassword();
    void setTable_number(int temp_table_num);
    int getTable_number();
    QHash<QString,QString> display();
    void setSalary(int n);
    int getSalary();

};

#endif // WAITER_INFO_H
