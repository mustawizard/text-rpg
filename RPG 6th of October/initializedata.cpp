#include "InitializeData.h"

void initializePlayerForestDistance(Player& player)
{
	std::ofstream writeObj;
	writeObj.open("player_forest_distance.txt", std::ios::out);
	writeObj << player.getForestDistanceTravelled();
	writeObj.close();
}