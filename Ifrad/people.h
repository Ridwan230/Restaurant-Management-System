#ifndef PEOPLE_H
#define PEOPLE_H
#include<QString>
#include<QHash>


class People
{
protected:
    int id;
    QString name;
    float rating;
public:
    People();
    People(int x,QString y, float z);
    void setID(int x);
    int getID();
    void setName(QString y);
    QString getName();
    void setRating(float z);
    float getRating();
    virtual QHash<QString,QString> display()=0;

};

#endif // PEOPLE_H
