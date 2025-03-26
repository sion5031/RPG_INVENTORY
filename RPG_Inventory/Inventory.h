#pragma once
#include <iostream>
#include <map>

#include "Item.h"

class Item;
class Player;

using namespace std;

class Inventory
{
	map<int, Item*> inven; //<spaceNum, SN>

public:
	Inventory();
	bool AddItem(Item* item);
	void RemoveItem(int arr);
	void UseItem(int arr, Player* player);
	void EquipItem(int arr, Player* player);
	void DisplayInventory();
	void ArrangeInventory();
	void MoveItem(int arr1, int arr2);
	bool CheckPresence(int num);
	int FindItem(int SN);

};
