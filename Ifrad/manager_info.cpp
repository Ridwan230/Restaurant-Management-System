#include "manager_info.h"

Manager_info::Manager_info(): People(0,"",0), password("")
{

}

Manager_info::Manager_info(int x, QString y, float z, QString s): People(x,y,z), password(s)
{

}
void Manager_info::setPassword(QString s)
{
    password=s;
}
QString Manager_info::getPassword()
{
    return password;
}
