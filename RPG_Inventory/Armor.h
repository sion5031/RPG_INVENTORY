#pragma once
#include "Equip.h"

class Armor : public Equip
{

public:
	void SetDefPoint(int defPoint);
	int GetDefPoint();
	bool Use(Player* player);
};