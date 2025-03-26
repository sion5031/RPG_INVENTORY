#pragma once
#include "Armor.h"

class Glove : public Armor
{

public:
	Glove();
	void EquipItem(Player* player);
};