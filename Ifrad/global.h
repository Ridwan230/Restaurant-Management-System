#ifndef GLOBAL_H
#define GLOBAL_H
#include "chef_info.h"
#include "waiter_info.h"
#include "customer_info.h"
#include "order.h"

#define MAX_CHEF 100
#define MAX_WAITER 100
#define MAX_CUSTOMER 100
#define MAX_ORDER 100

class Global
{
public:
    Global();
};

//Eikhane global variables er age "extern" lekhe declare korte hobe, tarpor oigula abar global.cpp file e initialize korte hobe
//Oikhane initialize korar por onno kono file e global.h include korlei oi variable ba object ke shob file access korte parbe
//Same can be done for objects

//      (Ridwan add korse)
extern int total_customer;
extern int total_chef;
extern int total_waiter;
extern int total_menu_item;
extern Chef_info* chef[MAX_CHEF];
extern Waiter_info* waiter[MAX_WAITER];
extern Customer_info* customer[MAX_CUSTOMER];
extern Order* order[MAX_ORDER];
extern int daily_cost;    //Daily cost record kore
//extern QHash<QString,int> current_order; //Last order of a particular customer record kore
extern int current_customer; //Customer jodi age eshe thake tahole eita diye pointer acces kora hobe
extern int total_order;
extern int table_number;



//      (Ifrad add korse)
extern int quantity_burger;
extern int quantity_fries;
extern int quantity_drinks;
extern int total_cost;
extern int temp;
extern int position;
extern int total_burger;
extern int total_fries;
extern int total_drinks;
extern int temp1;


#endif // GLOBAL_H
