#include "fooditem.h"

class Shopping_cart{
private:
int cart_ID ;
//int food_ID ;
int Quantity;
Fooditem *food;


public:
Shopping_cart();
Shopping_cart(int pcart_ID, Fooditem *fd , int pQuantity);
void add_cart_item();
void view_cart_Details();
void updateQuantity();
void setQuantity();
~Shopping_cart();

};