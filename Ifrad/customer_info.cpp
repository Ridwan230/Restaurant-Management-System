#include "customer_info.h"
Customer_info::Customer_info(): People(0,"",0), password(""),total_purchase(0)
{

}
Customer_info::Customer_info(int x, QString y, float z, QString s): People(x,y,z), password(s), total_purchase(0)
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
QHash<QString,QString> Customer_info::display()
{
    QHash<QString,QString> v;
    v["name"]=name;
    v["id"]=QString::number(id);
    v["rating"]=QString::number(rating);
    v["password"]=password;
    v["phone_number"]=phone_number;
    v["Email"]=Email;
    v["last_order"]=QString::number(last_order["burgers"])+" burgers, " + QString::number(last_order["fries"])+ " fries and " + QString::number(last_order["drinks"])+"drinks.";
    v["total_purchase"]=QString::number(total_purchase);
    return v;
}

void Customer_info::new_purchase(int n)
{
    total_purchase+=n;
}
void Customer_info::update_last_order(QHash<QString, int> latest_order)
{
    last_order["burgers"]=latest_order["burgers"];
    last_order["fries"]=latest_order["fries"];
    last_order["drinks"]=latest_order["drinks"];
}

