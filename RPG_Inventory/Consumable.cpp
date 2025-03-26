#include "Consumable.h"

bool Consumable::Use(Player* player)
{
	cout << this->GetName() << "을/를 사용합니다." << endl;
	this->MinusNum(1);
	if (this->GetNum() <= 0) {
		return false;
	}
}

void Consumable::EquipItem()
{
	cout << "장비할 수 없는 아이템입니다." << endl;
}

void Consumable::PlusNum(int get)
{
	num += get;
}

void Consumable::MinusNum(int lost)
{
	if (num >= lost) this->num -= lost;
	else num = 0;
}

void Consumable::SetNum(int num)
{
	this->num = num;
}

int Consumable::GetNum()
{
	return this->num;
}

void Consumable::Print()
{
	cout << this->GetName() << "\t/\t" << this->GetNum() << endl;
}
