#include "customer_info.h"
Customer_info::Customer_info(): People(0,"",0), password("")
{

}
Customer_info::Customer_info(int x, QString y, float z, QString s): People(x,y,z), password(s)
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
