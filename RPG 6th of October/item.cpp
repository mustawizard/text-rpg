#include "Item.h"

std::string Item::getItemName()
{
	return itemName;
}
std::string Item::getItemDescription()
{
	return itemDescription;
}
int Item::getItemPrice()
{
	return itemPrice;
}


int Sword::getSwordDamageMax()
{
	return swordDamageMax;
}
int Sword::getSwordDamageMin()
{
	return swordDamageMin;
}