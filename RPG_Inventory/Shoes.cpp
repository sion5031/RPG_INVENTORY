#include "Shoes.h"

Shoes::Shoes()
{
	this->SetSN(113);
	this->SetName("Shoes");
	this->SetDefPoint(6);
}

void Shoes::EquipItem(Player* player)
{
	if (!player->GetShoes())
	{
		player->SetShoes(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
	else
	{
		Item* temItem = player->GetShoes();;
		temItem->SetEquipedFalse();
		player->SetShoes(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
}