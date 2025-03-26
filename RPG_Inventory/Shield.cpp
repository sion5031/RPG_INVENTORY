#include "Shield.h"

Shield::Shield()
{
	this->SetSN(114);
	this->SetName("Shield");
	this->SetDefPoint(6);
}

void Shield::EquipItem(Player* player)
{
	if (!player->GetShield())
	{
		player->SetShield(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
	else
	{
		Item* temItem = player->GetShield();;
		temItem->SetEquipedFalse();
		player->SetShield(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
}