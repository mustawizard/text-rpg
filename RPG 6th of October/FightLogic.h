#pragma once
#include "Player.h"
#include "Enemy.h"
#include "time.h"
#include "math.h"

// DAMAGE FORMULA 
// DAMAGEAVG * ((PLAYER ATT + 25) / 5)

int playerDamage(Player& player);
void removeEnemyDamage(Player& player, Enemy& enemy);