#include "Upper.h"

Upper::Upper()
{
	this->SetSN(110);
	this->SetName("Upper");
	this->SetDefPoint(10);
}

void Upper::EquipItem(Player* player)
{
	if (!player->GetUpper())
	{
		player->SetUpper(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
	else
	{
		Item* temItem = player->GetUpper();;
		temItem->SetEquipedFalse();
		player->SetUpper(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
}