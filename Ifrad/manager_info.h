#ifndef MANAGER_INFO_H
#define MANAGER_INFO_H
#include "people.h"
#include<QString>


class Manager_info : public People
{
private:
    QString password;
public:
    Manager_info();
    Manager_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
};

#endif // MANAGER_INFO_H
