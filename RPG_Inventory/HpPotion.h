#pragma once
#include "Consumable.h"

class HpPotion : public Consumable
{
	int healPower;

public:
	HpPotion();
	HpPotion(int num);
	void SetHP(int hp);
	int GetHP();
	bool Use(Player* player);
};