#include "Glove.h"

Glove::Glove()
{
	this->SetSN(112);
	this->SetName("Glove");
	this->SetDefPoint(3);
}

void Glove::EquipItem(Player* player)
{
	if (!player->GetGlove())
	{
		player->SetGlove(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
	else
	{
		Item* temItem = player->GetGlove();;
		temItem->SetEquipedFalse();
		player->SetGlove(this);
		this->SetEquipedTrue();
		cout << this->GetName() << " �� �����߽��ϴ�." << endl;
	}
}