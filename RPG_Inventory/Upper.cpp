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
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
	else
	{
		Item* temItem = player->GetUpper();;
		temItem->SetEquipedFalse();
		player->SetUpper(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
}