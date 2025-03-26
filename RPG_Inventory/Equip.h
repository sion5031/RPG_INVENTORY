#pragma once
#include "Item.h"

class Equip : public Item
{

public:
	Equip();
	void SetEquipedTrue();
	void SetEquipedFalse();
	void Use();
	void Print();
};