#pragma once
#include <iostream>


class Enemy
{
public:

	Enemy();
	Enemy(std::string name, int health, int attack, int defence, int money);

	inline void setEnemyHealth(int val) { this->health = health - val; };

	inline std::string& getEnemyName() { return this->name; };
	inline int& getEnemyHealth() { return this->health; };
	inline int& getEnemyAttack() { return this->attack; };
	inline int& getEnemyDefence() { return this->defence; };
	inline int& getEnemyMoney() { return this->money; };
	


private:
	std::string name = "";
	int health = 0;
	int attack = 0;
	int defence = 0;
	int money = 0;
	int damageMin = 0;
	int damageMax = 0;

};