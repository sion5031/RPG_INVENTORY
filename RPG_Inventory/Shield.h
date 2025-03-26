#pragma once
#include "Armor.h"

class Shield : public Armor
{

public:
	Shield();
	void EquipItem(Player* player);
};