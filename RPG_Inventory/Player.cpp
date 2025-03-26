#include "Player.h"

enum Usage{ Use, Equip, Remove };

Player::Player(string name)
{
	this->name = name;

	hp = 100;
	mp = 100;
	attack = 10;
	defense = 5;

	Inventory* inven = new Inventory;
	myInven = inven;

	myWeapon = nullptr;
	myUpper = nullptr;
	myLower = nullptr;
	myGlove = nullptr;
	myShoes = nullptr;
	myShield = nullptr;
}

Player::Player(string name, int hp, int mp, int atk, int def, Inventory* myInven)
{
	this->name = name;
	this->hp = hp;
	this->mp = mp;
	this->attack = atk;
	this->defense = def;
	this->myInven = myInven;

	myWeapon = nullptr;
	myUpper = nullptr;
	myLower = nullptr;
	myGlove = nullptr;
	myShoes = nullptr;
	myShield = nullptr;
}

void Player::SetName(string name)
{
	this->name = name;
}

string Player::GetName()
{
	return this->name;
}

void Player::SetHp(int hp)
{
	this->hp = hp;
}

int Player::GetHp()
{
	return this->hp;
}

void Player::SetMp(int mp)
{
	this->mp = mp;
}

int Player::GetMp()
{
	return this->mp;
}

int Player::GetAttack()
{
	return this->attack;
}

void Player::SetAttack(int atk)
{
	this->attack = atk;
}

int Player::GetDefense()
{
	return this->defense;
}

void Player::SetDefense(int def)
{
	this->defense = def;
}

void Player::SetWeapon(Item* item)
{
	this->myWeapon = item;
}

void Player::SetUpper(Item* item)
{
	this->myUpper = item;
}

void Player::SetLower(Item* item)
{
	this->myLower = item;
}

void Player::SetGlove(Item* item)
{
	this->myGlove = item;
}

void Player::SetShoes(Item* item)
{
	this->myShoes = item;
}

void Player::SetShield(Item* item)
{
	this->myShield = item;
}

Item* Player::GetWeapon()
{
	return myWeapon;
}

Item* Player::GetUpper()
{
	return myUpper;
}

Item* Player::GetLower()
{
	return myLower;
}

Item* Player::GetGlove()
{
	return myGlove;
}

Item* Player::GetShoes()
{
	return myShoes;
}

Item* Player::GetShield()
{
	return myShield;
}

void Player::PlusHp(int healH)
{
	this->hp += healH;
}

void Player::PlusMp(int healM)
{
	this->mp += healM;
}

void Player::ShowPureStats()
{
	cout << "이름: " << name << endl << endl
		<< "HP: " << hp << '\t' << "MP: " << mp << endl << endl
		<< "Atk: " << attack << '\t' << "Def: " << defense << endl;
	cout << "===============================================" << endl << endl;
}

void Player::ShowTotalStats()
{
	int totalAtk = attack, totalDef = defense;
	
	if(myWeapon) totalAtk += myWeapon->GetAttPoint();
	if (myUpper) totalDef += myUpper->GetDefPoint();
	if (myLower) totalDef += myLower->GetDefPoint();
	if (myGlove) totalDef += myGlove->GetDefPoint();
	if (myShoes) totalDef += myShoes->GetDefPoint();
	if (myShield) totalDef += myShield->GetDefPoint();
	//totalAtk += (attack + myWeapon->GetAttPoint());
	//totalDef += (defense + myUpper->GetDefPoint() + myLower->GetDefPoint()
	//	+ myGlove->GetDefPoint()+ myShoes->GetDefPoint() + myShield->GetDefPoint());

	cout << "이름: " << name << endl << endl
		<< "HP: " << hp << '\t' << "MP: " << mp << endl << endl
		<< "Atk: " << totalAtk << '\t' << "Def: " << totalDef << endl;
	cout << "===============================================" << endl << endl;
}

void Player::ShowInventory()
{
	this->myInven->DisplayInventory();
}

void Player::AddInventory(Item* item)
{
	this->myInven->AddItem(item);
}

void Player::SelectItem(int num)
{
	if (myInven->CheckPresence(num))
	{
		int usage;

		cout << "1. 사용하기" << endl << endl << "2. 장비하기" << endl << endl << "3. 제거하기" << endl;
		cout << "===============================================" << endl << endl;
		cout << "행동을 선택해주세요: ";
		cin >> usage;
		usage--;

		if (usage == Usage::Use)
		{
			this->myInven->UseItem(num, this);
		}
		else if (usage == Usage::Equip)
		{
			this->myInven->EquipItem(num, this);
		}
		else if (usage == Usage::Remove)
		{
			this->myInven->RemoveItem(num);
		}
		else
		{
			cout << "잘못된 선택입니다." << endl << "행동을 스킵합니다." << endl;
		}
	}
	else
	{
		cout << "잘못된 선택입니다." << endl << "행동을 스킵합니다." << endl;
	}
}

void Player::MoveItem(int arr1, int arr2)
{
	myInven->MoveItem(arr1, arr2);
}

int Player::FindItem(int SN)
{
	return myInven->FindItem(SN);
}

