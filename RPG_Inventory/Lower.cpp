#include "Lower.h"

Lower::Lower()
{
	this->SetSN(111);
	this->SetName("Lower");
	this->SetDefPoint(8);
}

void Lower::EquipItem(Player* player)
{
	if (!player->GetLower())
	{
		player->SetLower(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
	else
	{
		Item* temItem = player->GetLower();;
		temItem->SetEquipedFalse();
		player->SetLower(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
}