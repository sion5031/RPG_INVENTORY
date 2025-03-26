#include "QuestItem.h"

bool QuestItem::Use(Player* player)
{
	cout << this->GetName() << "은/는 사용할 수 없는 아이템입니다." << endl;
	return true;
}

void QuestItem::EquipItem()
{
	cout << "장비할 수 없는 아이템입니다." << endl;
}

void QuestItem::PlusNum(int get)
{
	this->num += get;
}

void QuestItem::MinusNum(int lost)
{
	if (num >= lost) this->num -= lost;
	else num = 0;
}

void QuestItem::SetNum(int num)
{
	this->num = num;
}

int QuestItem::GetNum()
{
	return this->num;
}

void QuestItem::Print()
{
	cout << this->GetName() << "\t/\t" << this->GetNum() << endl;
}
