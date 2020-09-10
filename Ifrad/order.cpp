#include "order.h"

Order::Order(int b, int f, int d, int t) : burger(b),fries(f),drinks(d),table_no(t)
{

}
void Order::set_burger(int a)
{
    burger=a;
}
void Order::set_fries(int a)
{
    fries=a;
}
void Order::set_drinks(int a)
{
    drinks=a;
}
void Order::set_table_no(int a)
{
    table_no=a;
}
void Order::set_order_no(int a)
{
    order_id=a;
}

int Order::get_burger()
{
    return burger;
}
int Order::get_fries()
{
    return fries;
}
int Order::get_drinks()
{
    return drinks;
}
int Order::get_table_no()
{
    return table_no;
}
int Order::get_order_no()
{
    return order_id;
}
