#pragma once
#include "Item.h"

class Consumable : public Item
{

public:
	void SetNum(int num);
	int GetNum();
	bool Use(Player* player);
	void EquipItem();
	void PlusNum(int get);
	void MinusNum(int lost);
	void Print();
};