#include "customer_info.h"
Customer_info::Customer_info(): People(0,"",0), password(""),number_of_order(0)
{

}
Customer_info::Customer_info(int x, QString y, float z, QString s): People(x,y,z), password(s),number_of_order(0)
{

}
void Customer_info::setPassword(QString s)
{
    password=s;
}
QString Customer_info::getPassword()
{
    return password;
}
void Customer_info::setPhone_number(QString s)
{
    phone_number=s;
}
QString Customer_info::getPhone_number()
{
    return phone_number;
}
void Customer_info::setEmail(QString s)
{
    Email=s;
}
QString Customer_info::getEmail()
{
    return Email;
}
void Customer_info::setOrder(int serial)
{
    ordered_items[number_of_order]=serial;
    number_of_order++;
}
int* Customer_info::getOrder()
{
    static int temp_arr[10];
    for(int i=0;i<10;i++)
    {
        temp_arr[i]=ordered_items[i];
    }
    return temp_arr;
}
int Customer_info::getNumber_of_order()
{
    return number_of_order;
}
