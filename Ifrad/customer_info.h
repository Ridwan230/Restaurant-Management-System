#ifndef CUSTOMER_INFO_H
#define CUSTOMER_INFO_H
#include "people.h"


class Customer_info : public People
{
private:
    QString password;
    QString phone_number;
    QString Email;
public:
    Customer_info();
    Customer_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
    void setPhone_number(QString s);
    QString getPhone_number();
    void setEmail(QString s);
    QString getEmail();

};

#endif // CUSTOMER_INFO_H
