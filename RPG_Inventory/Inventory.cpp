#include <queue>

#include "Inventory.h"

Inventory::Inventory()
{
}

bool Inventory::AddItem(Item* item)
{
	if (this->inven.size() < 100)
	{		
		for (int i = 0;i <= this->inven.size();i++) {
			if (inven.size() == 99)
			{
				cout << "�κ��丮�� ���� á���ϴ�." << endl;
				return false;
			}
			if (this->inven.find(i) == this->inven.end()) {
				this->inven[i] = item;
				break;
			}
		}
		cout << item->GetName() << "�� ȹ���߽��ϴ�." << endl;
		return true;
	}
	else
	{
		cout << "�κ��丮�� ���� á���ϴ�." << endl;
		return false;
	}
}

void Inventory::RemoveItem(int arr)
{
	//delete (this->inven[arr]);			//??????????????
	this->inven.erase(arr);
}

void Inventory::UseItem(int arr, Player* player)
{
	if (!(this->inven[arr]->Use(player))) {
		RemoveItem(arr);
	}
}

void Inventory::EquipItem(int arr, Player* player)
{
	this->inven[arr]->EquipItem(player);
}

void Inventory::DisplayInventory()
{
	cout << "=================INVENTORY====================" << endl << endl;
	for (int i = 0;i < this->inven.size();i++) {
		cout << '#' << i << '\t';
		this->inven[i]->Print();
	}
}

void Inventory::ArrangeInventory()
{
	priority_queue<Item*> tem;
	for (int i = 0; i < this->inven.size();i++) {
		if (this->inven.find(i) != this->inven.end()) {
			tem.push(this->inven[i]);
		}
	}
	this->inven.clear();
	for (int i = 0; i < this->inven.size();i++) {
		this->inven[i] = tem.top();
		tem.pop();
	}
}

void Inventory::MoveItem(int arr1, int arr2)
{
	if (arr1 != arr2)
	{
		if (this->inven[arr1]->GetSN() == this->inven[arr2]->GetSN())
		{
			if (this->inven[arr1]->GetSN() < 100)
			{
				this->inven[arr1]->PlusNum(this->inven[arr2]->GetNum());
				RemoveItem(arr2);
				cout << "�� �׸��� ���ƽ��ϴ�." << endl;
			}
			else
			{
				Item* item = this->inven[arr1];
				this->inven[arr1] = this->inven[arr2];
				this->inven[arr2] = item;
				cout << "�� �������� ��ġ�� �ٲ���ϴ�." << endl;
			}
		}
		else
		{
			Item* item = this->inven[arr1];
			this->inven[arr1] = this->inven[arr2];
			this->inven[arr2] = item;
			cout << "�� �������� ��ġ�� �ٲ���ϴ�." << endl;
		}
	}
	else
	{
		cout << "���� ������ �Դϴ�." << endl;
	}
}

bool Inventory::CheckPresence(int num)
{
	if (inven.find(num) == inven.end()) {
		return false;
	}
	else {
		return true;
	}
}

int Inventory::FindItem(int SN)
{
	int count = 0;
	for (int i = 0; i < 100;i++)
	{
		if (inven.find(i) != inven.end() && inven[i]->GetSN() == SN)
		{
			count += inven[i]->GetNum();
		}
	}
	return count;
}
