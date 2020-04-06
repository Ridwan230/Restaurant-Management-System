#include "waiter_info.h"

Waiter_info::Waiter_info(): People(0,"",0), password("")
{

}

Waiter_info::Waiter_info(int x, QString y, float z, QString s): People(x,y,z), password(s)
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
