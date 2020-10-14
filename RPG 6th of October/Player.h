#pragma once
#include "Weapon.h"

class Player
{
public:

	Player()
	{
		Weapon weapon;
		this->damageMin = weapon.getDamageMin();
		this->damageMax = weapon.getDamageMax();
	}

	inline void setForestDistanceTravelled(int amount) { this->forestDistanceTravelled = amount; };
	inline void setPlayerHealth(int health) { this->playerHealth = health; };
	inline void setPlayerAttack(int attack) { this->playerAttack = attack; };
	inline void setPlayerDefence(int defence) { this->playerDefence = defence; };
	inline void setPlayerMoney(int money) { this->playerMoney = money; };
	inline void setPlayerDamageMin(Weapon& weapon) { this->damageMin = weapon.getDamageMin(); };
	inline void setPlayerDamageMax(Weapon& weapon) { this->damageMax = weapon.getDamageMax(); };




	inline const unsigned short int& getForestDistanceTravelled() { return this->forestDistanceTravelled; };
	inline const int& getPlayerHP() { return this->playerHealth; };
	inline const int& getPlayerAttack() { return this->playerAttack; };
	inline const int& getPlayerDefence() { return this->playerDefence; };
	inline const int& getPlayerMoney() { return this->playerMoney; };
	inline const int& getPlayerMinDamage() { return this->damageMin; };
	inline const int& getPlayerMaxDamage() { return this->damageMax; };


private:
	unsigned short int forestDistanceTravelled = 0;
	int playerHealth = 100;
	int playerAttack = 0;
	int playerDefence = 0;
	int playerMoney = 0;
	int damageMin = 0;
	int damageMax = 0;
	int evasion = 0;
	int luck = 0;
};