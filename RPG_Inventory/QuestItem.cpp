#include "QuestItem.h"

bool QuestItem::Use(Player* player)
{
	cout << this->GetName() << "��/�� ����� �� ���� �������Դϴ�." << endl;
	return true;
}

void QuestItem::EquipItem()
{
	cout << "����� �� ���� �������Դϴ�." << endl;
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
