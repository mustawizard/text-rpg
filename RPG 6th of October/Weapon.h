#pragma once
#include "Item.h"

class Weapon
{
public:
	Weapon(std::string weaponName, int damageMin, int damageMax);
	Weapon() { weaponName = "Broad Sword"; damageMin = 5; damageMax = 10; };

	inline void setDamageMin() { this->damageMin = damageMin; };
	inline void setDamageMax() { this->damageMax = damageMax; };

	inline int& getDamageMin() { return this->damageMin; };
	inline int& getDamageMax() { return this->damageMax; };
	inline std::string& getWeaponName() { return this->weaponName; };

private:
	std::string weaponName = "";
	int damageMin = 0;
	int damageMax = 0;
};