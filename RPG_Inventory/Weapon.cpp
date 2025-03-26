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
	cout << "����� �� ���� �������Դϴ�." << endl;
	return true;
}


void Weapon::EquipItem(Player* player)
{
	if (!player->GetWeapon())
	{
		player->SetWeapon(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
	else
	{
		Item* temItem = player->GetWeapon();;
		temItem->SetEquipedFalse();
		player->SetWeapon(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
}
