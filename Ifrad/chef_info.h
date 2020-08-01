#ifndef CHEF_INFO_H
#define CHEF_INFO_H
#include "people.h"
#include<QString>


class Chef_info : public People
{
private:
    QString password;
    int salary;
public:
    Chef_info();
    Chef_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
    QHash<QString,QString> display();
    void setSalary(int n);
    int getSalary();
};
#endif // CHEF_INFO_H
