#include "GameLoop.h"

void gameLoop(Player& player)
{
	Forest forest;
	std::string userInput;
	// make class for forest interface
	std::cout << "1. Enter " << forest.getForestName() << std::endl;
	std::cin >> userInput;
	if (userInput == "1")
	{
		welcomeToForest(player);
	}
	else
	{
		userInputError(&gameLoop);
	}
}