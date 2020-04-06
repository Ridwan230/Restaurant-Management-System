#include "chef_info.h"

Chef_info::Chef_info(): People(0,"",0), password("")
{

}

Chef_info::Chef_info(int x, QString y, float z, QString s): People(x,y,z), password(s)
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

