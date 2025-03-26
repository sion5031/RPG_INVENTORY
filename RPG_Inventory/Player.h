#pragma once
#include <iostream>

#include "Inventory.h"
//#include "Item_h.h"
//#include "Weapon.h"

class Inventory;
class Item;
//class Weapon;
//class Upper;
//class Lower;
//class Glove;
//class Shoes;
//class Shield;

using namespace std;

class Player
{
	string name;
	int hp;
	int mp;
	int attack;
	int defense;
	Inventory* myInven;
	Item* myWeapon;
	Item* myUpper;
	Item* myLower;
	Item* myGlove;
	Item* myShoes;
	Item* myShield;



public:
	Player(string name);
	Player(string name, int hp, int mp, int atk, int def, Inventory* myInven);

	void SetName(string name);
	string GetName();
	void SetHp(int hp);
	int GetHp();
	void SetMp(int mp);
	int GetMp();
	int GetAttack();
	void SetAttack(int atk);
	int GetDefense();
	void SetDefense(int def);

	void SetWeapon(Item* item);
	void SetUpper(Item* item);
	void SetLower(Item* item);
	void SetGlove(Item* item);
	void SetShoes(Item* item);
	void SetShield(Item* item);
	Item * GetWeapon();
	Item * GetUpper();
	Item * GetLower();
	Item * GetGlove();
	Item * GetShoes();
	Item * GetShield();

	void PlusHp(int healH);
	void PlusMp(int healM);


	void ShowPureStats();
	void ShowTotalStats();
	void ShowInventory();
	void AddInventory(Item* item);
	void SelectItem(int num);
	void MoveItem(int arr1, int arr2);
	
	int FindItem(int SN);
};