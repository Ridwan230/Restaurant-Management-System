#ifndef MENU_H
#define MENU_H
#include<QString>


class Menu
{
    int serial;
    QString item_name;
    int price;
    int profit;
    float item_rating;

public:
    Menu();
    Menu(int x, QString s,int y,  int z, float f);
    void setSerial(int x);
    void setItem_name(QString s);
    void setPrice(int x);
    void setProfit(int x);
    void setItem_rating(float x);
    int getSerial();
    QString getItem_name();
    int getPrice();
    int getProfit();
    float getItem_rating();
};

#endif // MENU_H
