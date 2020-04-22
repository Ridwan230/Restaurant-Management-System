#ifndef GLOBAL_H
#define GLOBAL_H
#include "chef_info.h"
#include "waiter_info.h"
#define MAX_CHEF 10
#define MAX_WAITER 10

class Global
{
public:
    Global();
};

//Eikhane global variables er age "extern" lekhe declare korte hobe, tarpor oigula abar global.cpp file e initialize korte hobe
//Oikhane initialize korar por onno kono file e global.h include korlei oi variable ba object ke shob file access korte parbe
//Same can be done for objects

extern int total_customer;
extern int total_chef;
extern int total_waiter;
extern int total_menu_item;
extern Chef_info chef[MAX_CHEF];
extern Waiter_info waiter[MAX_WAITER];


#endif // GLOBAL_H
