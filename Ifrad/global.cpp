#include "global.h"

Global::Global()
{

}

//   (Ridwan add korse)
int total_customer=0;
int total_chef=2;
int total_waiter=2;
int total_menu_item=0;
int total_order=0;
//Order* order[MAX_ORDER];
Chef_info* chef[MAX_CHEF];
Waiter_info* waiter[MAX_WAITER];
Customer_info* customer[MAX_CUSTOMER];
Order* order[MAX_ORDER];
int daily_cost=0;
//QHash<QString,int> current_order;
int current_customer;
int table_number=0;
QQueue<Order*> chef_queue;
QQueue<Order*> waiter_queue;




//   (Ifrad add korse)
int quantity_burger=0;
int quantity_fries=0;
int quantity_drinks=0;
int total_cost=0;
int temp=-1;
int position=0;
int total_burger=0;
int total_fries=0;
int total_drinks=0;
int temp1=0;
bool table_res[7]={false};
int customer_tableno;
