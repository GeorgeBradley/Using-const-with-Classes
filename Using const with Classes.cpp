// Using const with Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
int main()
{
    const Item objiPhone("iPhone X", 432, 1000);
    Item objHeadphones("Beats", 543, 430);

    objiPhone.Display_Item();
    objHeadphones.Display_Item();
}