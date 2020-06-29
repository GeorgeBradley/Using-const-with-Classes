#include "Item.h"
void Item:: Display_Item() const
{
	std::cout << sItemName << std::endl;
	std::cout << dItemPrice << std::endl;
	std::cout << iItemQuantitySold << std::endl;

}