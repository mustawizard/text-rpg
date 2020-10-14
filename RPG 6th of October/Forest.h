#pragma once
#include <iostream>
#include "ErrorChecking.h"
#include "Player.h"
#include "time.h"
#include "math.h"

void welcomeToForest(Player& player);
unsigned short int forestDistanceRand();


class Forest
{
public:
	std::string getForestName()
	{
		return forestName;
	}
	unsigned short int getForestMaxDistance()
	{
		return forestMaxDistance;
	}
private:
	std::string forestName = "The Forest";
	unsigned short int forestMaxDistance = 100;
};



// create forest enemy class