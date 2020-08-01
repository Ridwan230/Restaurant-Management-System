#include "global.h"

Global::Global()
{

}

//   (Ridwan add korse)
int total_customer=0;
int total_chef=0;
int total_waiter=0;
int total_menu_item=0;
Chef_info* chef[MAX_CHEF];
Waiter_info* waiter[MAX_WAITER];
Customer_info* customer[MAX_CUSTOMER];
int daily_cost=0;
QHash<QString,int> current_order;
int current_customer;



//   (Ifrad add korse)
int quantity_burger=0;
int quantity_fries=0;
int quantity_drinks=0;
int total_cost=0;
int temp=-1;
