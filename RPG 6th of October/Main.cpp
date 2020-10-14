#include <iostream>
#include "Forest.h"
#include "Player.h"
#include "Weapon.h"
#include "InitializeData.h"
#include "GameLoop.h"
#include "time.h"
#include "math.h"
#include "FightLogic.h"

// LEARN INHERITANCE

int main()
{	
	Weapon weapon;
	Player player;
	srand(time(0));
	player.setPlayerHealth(120);
	bool gameIsRunning = true;
	{
	//	gameLoop(player);
	}
	std::cout << playerDamage(player);
	return 0;
}

