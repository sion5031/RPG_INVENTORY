#include "Weapon.h"

Weapon::Weapon()
{

}

void Weapon::SetAttPoint(int atkPoint)
{
	this->atkPoint = atkPoint;
}

int Weapon::GetAttPoint()
{
	return this->atkPoint;
}

bool Weapon::Use(Player* player)
{
	cout << "사용할 수 없는 아이템입니다." << endl;
	return true;
}


void Weapon::EquipItem(Player* player)
{
	if (!player->GetWeapon())
	{
		player->SetWeapon(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
	else
	{
		Item* temItem = player->GetWeapon();;
		temItem->SetEquipedFalse();
		player->SetWeapon(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
}
