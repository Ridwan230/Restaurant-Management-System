#include "waiter_info.h"



Waiter_info::Waiter_info(): People(0,"",0), password(""), table_number(0)
{

}

Waiter_info::Waiter_info(int x, QString y, float z, QString s, int temp_table_num): People(x,y,z), password(s), table_number (temp_table_num)
{

}
void Waiter_info::setPassword(QString s)
{
    password=s;
}
QString Waiter_info::getPassword()
{
    return password;
}

void Waiter_info::setTable_number(int temp_table_num)
{
    table_number=temp_table_num;
}
int Waiter_info::getTable_number()
{
    return table_number;
}
QHash<QString,QString> Waiter_info::display()
{
    QHash<QString,QString> v;
    v["name"]=name;
    v["id"]=QString::number(id);
    v["rating"]=QString::number(rating);
    v["password"]=password;
    v["table_number"]=QString::number(table_number);
    v["salary"]=QString::number(salary);
    if(current_order!=NULL)
    {
        v["table_number"]="Table Number - "+QString::number(current_order->get_table_no());
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

void Waiter_info::setSalary(int n)
{
    salary=n;
}
int Waiter_info::getSalary()
{
    return salary;
}
Order* Waiter_info::get_order()
{
    return current_order;
}
void Waiter_info::set_order(Order *r)
{
    current_order=r;
}
void Waiter_info::delete_order()
{
    current_order=NULL;
}
