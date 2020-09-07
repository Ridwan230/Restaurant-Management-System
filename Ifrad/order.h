#ifndef ORDER_H
#define ORDER_H


class order
{
public:
    order();
    void set_burger(int a);
    void set_fries(int a);
    void set_drinks(int a);
    void set_table_no(int a);
    void set_order_no(int a);
    int set_burger();
    int set_fries();
    int set_drinks();
    int set_table_no();
    int set_order_no();


private:
    int burger;
    int fries;
    int drinks;
    int table_no;
    int order_id;
};

#endif // ORDER_H
