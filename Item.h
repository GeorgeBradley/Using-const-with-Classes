#pragma once
#include <string>
#include <iostream>
class Item
{
private:
	std::string sItemName;
	int iItemQuantitySold;
	double dItemPrice;
public:

	Item(std::string s, int i, double d)
		:sItemName(s), iItemQuantitySold(i), dItemPrice(d)
	{

	}

	void Display_Item() const;

};

