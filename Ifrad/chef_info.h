#ifndef CHEF_INFO_H
#define CHEF_INFO_H
#include "people.h"
#include "order.h"
#include<QString>


class Chef_info : public People
{
private:
    QString password;
    int salary;
    Order* current_order;
public:
    Chef_info();
    Chef_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
    QHash<QString,QString> display();
    void setSalary(int n);
    int getSalary();
    Order* get_order();
    void set_order(Order* r);
    void delete_order();

};
#endif // CHEF_INFO_H
