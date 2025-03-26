#include "Item.h"

Item::Item()
{
}

void Item::SetName(string name)
{
	this->name = name;
}

string Item::GetName()
{
	return this->name;
}

void Item::SetSN(int SN)
{
	this->SN = SN;
}

int Item::GetSN()
{
	return this->SN;
}

int Item::GetAttPoint()
{
	return atkPoint;
}

int Item::GetDefPoint()
{
	return defPoint;
}

int Item::GetNum()
{
	return this->num;
}

void Item::PlusNum(int num)
{
}

void Item::MinusNum(int num)
{
}

bool Item::Use(Player* player)
{
	return false;
}

void Item::SetEquipedTrue()
{
	equiped = true;
}

void Item::SetEquipedFalse()
{
	equiped = false;
}

void Item::EquipItem(Player* player)
{
	//if (this->GetSN() <= 101)
	//{
	//	if (!player->GetWeapon())
	//	{
	//		player->SetWeapon(this);
	//		this->SetEquipedTrue();
	//		cout << this->GetName() << " 를 장착했습니다." << endl;
	//	}
	//	else
	//	{
	//		Item* temItem = player->GetWeapon();;
	//		temItem->SetEquipedFalse();
	//		player->SetWeapon(this);
	//	}
	//}
	//else if (this->GetSN() == 110)
	//{
	//	if (!player->GetUpper())
	//	{
	//		player->SetUpper(this);
	//		this->SetEquipedTrue();
	//		cout << this->GetName() << " 를 장착했습니다." << endl;
	//	}
	//	else
	//	{
	//		Item* temItem = player->GetUpper();;
	//		temItem->SetEquipedFalse();
	//		player->SetUpper(this);
	//	}
	//}
}

void Item::Print()
{
}
