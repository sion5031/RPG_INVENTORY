#include "MpPotion.h"

MpPotion::MpPotion()
{
	SetName("Mp Potion");
	SetSN(21);
	SetNum(1);
	healPower = 10;
}

MpPotion::MpPotion(int num)
{
	SetName("HpPotion");
	SetNum(num);
	healPower = 10;
}

void MpPotion::SetMP(int hp)
{
	this->healPower = hp;
}

int MpPotion::GetMP()
{
	return healPower;
}

bool MpPotion::Use(Player* player)
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
