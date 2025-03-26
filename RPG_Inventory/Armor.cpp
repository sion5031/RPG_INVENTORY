#include "Armor.h"

void Armor::SetDefPoint(int defPoint)
{
	this->defPoint = defPoint;
}

int Armor::GetDefPoint()
{
	return this->defPoint;
}

bool Armor::Use(Player* player)
{
	cout << "사용할 수 없는 아이템입니다." << endl;
	return false;
}