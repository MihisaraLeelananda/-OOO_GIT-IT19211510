#include "shopping_cart.h"
#include "fooditem.h"
#include <string.h>


Shopping_cart::Shopping_cart()
{
    cart_ID = 0;
    Quantity =0;

};

Shopping_cart :: Shopping_cart(int pcart_ID, Fooditem *fd , int pQuantity)
{
    cart_ID = pcart_ID;
    Quantity = pQuantity;
    food = fd;
    
};



