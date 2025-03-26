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
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
	else
	{
		Item* temItem = player->GetShoes();;
		temItem->SetEquipedFalse();
		player->SetShoes(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " 를 장착했습니다." << endl;
	}
}