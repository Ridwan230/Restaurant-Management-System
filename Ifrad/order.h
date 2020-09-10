#ifndef ORDER_H
#define ORDER_H
#include "customer_info.h"

class Order
{
public:
    Order(int b, int f, int d, int t);
    void set_burger(int a);
    void set_fries(int a);
    void set_drinks(int a);
    void set_table_no(int a);
    void set_order_no(int a);
    int get_burger();
    int get_fries();
    int get_drinks();
    int get_table_no();
    int get_order_no();
    friend class Customer_info;


private:
    int burger;
    int fries;
    int drinks;
    int table_no;
    int order_id;
};

#endif // ORDER_H
