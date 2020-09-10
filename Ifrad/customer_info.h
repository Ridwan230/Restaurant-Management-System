#ifndef CUSTOMER_INFO_H
#define CUSTOMER_INFO_H
#include "people.h"


class Customer_info : public People
{
private:
    QString password;
    QString phone_number;
    QString Email;
    int total_purchase;

    int customer_order;

    QHash<QString,int> last_order;
public:
    Customer_info();
    Customer_info(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
    void setPhone_number(QString s);
    QString getPhone_number();
    void setEmail(QString s);
    QString getEmail();
    QHash<QString,QString> display();
    void new_purchase(int n);     //Keeps tract of total purchase by the customer
    void update_last_order(QHash<QString,int> latest_order);     //keeps tract of the latest order of the customer so that can be used
                                                                //when he visits the restaurant again.
    void set_customer_order(int r);
    int get_customer_order();

};

#endif // CUSTOMER_INFO_H
