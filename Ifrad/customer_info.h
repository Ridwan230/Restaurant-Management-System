#ifndef CUSTOMER_INFO_H
#define CUSTOMER_INFO_H
#include "people.h"


class Customer_info : public People
{
private:
    QString password;
    QString phone_number;
    QString Email;
    int number_of_order;
    int ordered_items[10];
public:
    Customer_info();
    Customer_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
    void setPhone_number(QString s);
    QString getPhone_number();
    void setEmail(QString s);
    QString getEmail();
    void setOrder(int serial);  //serial number of the item in menu
    int* getOrder();           //returns an array that contains the items he ordered
    int getNumber_of_order(); //returns the number of items ordered by the customer

};

#endif // CUSTOMER_INFO_H
