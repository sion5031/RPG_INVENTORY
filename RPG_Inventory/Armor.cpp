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
	cout << "����� �� ���� �������Դϴ�." << endl;
	return false;
}