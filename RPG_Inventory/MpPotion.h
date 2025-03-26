#pragma once
#include "Consumable.h"

class MpPotion : public Consumable
{
	int healPower;

public:
	MpPotion();
	MpPotion(int num);
	void SetMP(int hp);
	int GetMP();
	bool Use(Player* player);
};