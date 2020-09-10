#include "global.h"
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
    v["total_purchase"]=QString::number(total_purchase);
    /*
    for ( auto it = last_order.begin(); it != last_order.end(); ++it )
        {
            if(it.value()>0)
            {
                v["last_order"]= v["last_order"]+ "\n"+it.key()+" (" +QString::number(it.value())+")";
            }
        }
    */

    if(order[customer_order]->burger>0)
    {
        v["last_order"]=v["last_order"]+"\nBurger ("+QString::number(order[customer_order]->burger)+")";
    }
    if(order[customer_order]->fries>0)
    {
        v["last_order"]=v["last_order"]+"\nFrench-Fry ("+QString::number(order[customer_order]->fries)+")";
    }
    if(order[customer_order]->drinks>0)
    {
        v["last_order"]=v["last_order"]+"\nDrinks ("+QString::number(order[customer_order]->drinks)+")";
    }
    return v;
}

void Customer_info::new_purchase(int n)
{
    total_purchase+=n;
}
void Customer_info::update_last_order(QHash<QString, int> latest_order)
{
    last_order["Burger"]=latest_order["Burger"];
    last_order["French-fry"]=latest_order["French-fry"];
    last_order["Drinks"]=latest_order["Drinks"];
}

void Customer_info::set_customer_order(int r)
{
    customer_order=r;
}
int Customer_info::get_customer_order()
{
    return customer_order;
}


