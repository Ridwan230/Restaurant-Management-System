#ifndef WAITER_INFO_H
#define WAITER_INFO_H
#include "people.h"
#include<QString>


class Waiter_info : public People
{
private:
    QString password;
public:
    Waiter_info();
    Waiter_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
};

#endif // WAITER_INFO_H
