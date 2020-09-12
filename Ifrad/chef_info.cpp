#include "chef_info.h"

Chef_info::Chef_info(): People(0,"",0), password(""),salary(0)
{

}

Chef_info::Chef_info(int x, QString y, float z, QString s): People(x,y,z), password(s),salary(0)
{

}
void Chef_info::setPassword(QString s)
{
    password=s;
}
QString Chef_info::getPassword()
{
    return password;
}
QHash<QString,QString> Chef_info::display()
{
    QHash<QString,QString> v;
    v["name"]=name;
    v["id"]=QString::number(id);
    v["rating"]=QString::number(rating);
    v["password"]=password;
    v["salary"]=QString::number(salary);
    if(current_order!=NULL)
    {
        if(current_order->get_burger()>0)
        {
            v["current_order"]=v["current_order"]+"\nBurger ("+QString::number(current_order->get_burger())+")";
        }
        if(current_order->get_fries()>0)
        {
            v["current_order"]=v["current_order"]+"\nFrench-Fry ("+QString::number(current_order->get_fries())+")";
        }
        if(current_order->get_drinks()>0)
        {
            v["current_order"]=v["current_order"]+"\nDrinks ("+QString::number(current_order->get_drinks())+")";
        }
    }
    else
    {
        v["current_order"]="No order placed.";
    }
    return v;
}
void Chef_info::setSalary(int n)
{
    salary=n;
}
int Chef_info::getSalary()
{
    return salary;
}
Order* Chef_info::get_order()
{
    return current_order;
}
void Chef_info::set_order(Order *r)
{
    current_order=r;
}
void Chef_info::delete_order()
{
    current_order=NULL;
}
