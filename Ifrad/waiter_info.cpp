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
