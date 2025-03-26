#pragma once
#include "Armor.h"

class Shoes : public Armor
{

public:
	Shoes();
	void EquipItem(Player* player);
};