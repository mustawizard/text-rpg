#pragma once
#include <iostream>

class Item
{
public:
	Item();
	Item(std::string itemName, int itemPrice) {};

	inline std::string& getItemName() { return this->itemName; };
	inline int& getItemPrice() { return this->itemPrice; };

private:
	std::string itemName = "";
	int itemPrice = 0;

};