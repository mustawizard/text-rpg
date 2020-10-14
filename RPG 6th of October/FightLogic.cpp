#include "FightLogic.h"

// i want a damage min and damage max
// i need to take into consideration the player weapon, attack and enemy's defence and enemy hp..

int playerDamage(Player& player)
{
	int min = player.getPlayerMinDamage();
	int max = player.getPlayerMaxDamage();
	int random = rand() % min + max;
	return random;

}

void removeEnemyDamage(Player& player, Enemy& enemy)
{
	int playerDmg = playerDamage(player);
	int damageMultiplier = (player.getPlayerAttack() + 25) / 50;
	int realFinal = playerDmg * ((player.getPlayerAttack() + 25) / 5);
	enemy.setEnemyHealth(realFinal);
	// DAMAGEAVG * ((PLAYER ATT + 25) / 5)
}
