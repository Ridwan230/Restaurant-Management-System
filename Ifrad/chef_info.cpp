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

