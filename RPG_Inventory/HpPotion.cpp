#include "HpPotion.h"

HpPotion::HpPotion()
{
	SetName("Hp Potion");
	SetSN(20);
	SetNum(1);
	healPower = 10;
}

HpPotion::HpPotion(int num)
{
	SetName("HpPotion");
	SetNum(num);
	healPower = 10;
}

void HpPotion::SetHP(int hp)
{
	this->healPower = hp;
}

int HpPotion::GetHP()
{
	return healPower;
}

bool HpPotion::Use(Player* player)
{
	player->PlusHp(healPower);
	cout << "ĳ������ HP�� " << healPower << " ��ŭ ȸ���߽��ϴ�." << endl;
	this->MinusNum(1);
	if (this->GetNum() <= 0)
	{
		return false;
	}
	return true;
}
