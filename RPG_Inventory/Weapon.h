#pragma once
#include "Equip.h"


class Weapon : public Equip
{

public:
	Weapon();

	void SetAttPoint(int atkPoint);
	int GetAttPoint();
	bool Use(Player* player);
	void EquipItem(Player* player);
};