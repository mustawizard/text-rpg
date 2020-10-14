#pragma once
#include "Player.h"
#include "Enemy.h"
#include "time.h"
#include "math.h"

// DAMAGE FORMULA 
// DAMAGEAVG * ((PLAYER ATT + 25) / 5)
// player.attack *4 - enemy.def*2

int playerDamage(Player& player);
void removeEnemyDamage(Player& player, Enemy& enemy);
