#include "order.h"

order::order()
{

}
void order::set_burger(int a)
{
    burger=a;
}
void order::set_fries(int a)
{
    fries=a;
}
void order::set_drinks(int a)
{
    drinks=a;
}
void order::set_table_no(int a)
{
    table_no=a;
}
void order::set_order_no(int a)
{
    order_id=a;
}

int order::set_burger()
{
    return burger;
}
int order::set_fries()
{
    return fries;
}
int order::set_drinks()
{
    return drinks;
}
int order::set_table_no()
{
    return table_no;
}
int order::set_order_no()
{
    return order_id;
}
