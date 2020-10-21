#include "Forest.h"

void welcomeToForest(Player& player)
{
	Forest forest;
	std::string userInput;
	system("cls");
	std::cout << "Welcome to " << forest.getForestName() << "\t Your current distance is: " << player.getForestDistanceTravelled() << std::endl;
	std::cout << "\n1. Travel through " << forest.getForestName() << std::endl;
	std::cin >> userInput;
	if (userInput == "1")
	{
		unsigned short int playerDist = 0;
		system("cls");
		playerDist = forestDistanceRand();
		
		system("cls");
		std::cout << "You travelled " << playerDist << "km " << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));
		system("cls");
		player.setForestDistanceTravelled(playerDist);
		// fight logic
		player.setForestDistanceTravelled(10);
		if (player.getForestDistanceTravelled() >= forest.getForestMaxDistance())
		{
			std::cout << "End" << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		}
		else
		{
			welcomeToForest(player);
		}
		// remember to always check if player distance = forest max distance after fight
	}
	else
	{
		userInputError(&welcomeToForest);
	}
}


unsigned short int forestDistanceRand()
{
	unsigned short int random = 0;
	random = rand() % 5 + 1;
	return random;
}
