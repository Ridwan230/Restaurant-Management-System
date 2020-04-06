#include "menu.h"

Menu::Menu() : serial(0),item_name(""),price(0),profit(0),item_rating(0.0)
{

}

Menu::Menu(int x, QString s, int y, int z, float f): serial(x),item_name(s),price(y),profit(z),item_rating(f)
{

}
void Menu::setSerial(int x)
{
    serial=x;
}
void Menu::setItem_name(QString s)
{
    item_name=s;
}
void Menu::setPrice(int x)
{
    price=x;
}
void Menu::setProfit(int x)
{
    profit=x;
}
void Menu::setItem_rating(float x)
{
    item_rating=x;
}
int Menu::getSerial()
{
    return serial;
}
QString Menu::getItem_name()
{
    return item_name;
}
int Menu::getPrice()
{
    return price;
}
int Menu::getProfit()
{
    return profit;
}
float Menu::getItem_rating()
{
    return item_rating;
}
