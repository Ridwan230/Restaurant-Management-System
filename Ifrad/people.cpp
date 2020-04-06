#include "people.h"

People::People(): id(0), name(""), rating (0.0)
{
}

People::People(int x, QString y,float z): id(x), name(y), rating (z)
{
}
void People::setID(int x)
{
    id=x;
}
int People::getID()
{
    return id;
}
void People::setName(QString y)
{
    name=y;
}
QString People::getName()
{
    return name;
}
void People::setRating(float z)
{
    rating=z;
}
float People::getRating()
{
    return rating;
}
