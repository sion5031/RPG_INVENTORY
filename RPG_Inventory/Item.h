#pragma once
#include <iostream>

#include "Player.h"

using namespace std;

class Player;

class Item
{
	string name;
	int SN;

protected:

	int num;
	int atkPoint;
	int defPoint;
	bool equiped;

public:
	Item();
	void SetName(string name);
	string GetName();
	void SetSN(int SN);
	int GetSN();

	void SetEquipedTrue();
	void SetEquipedFalse();


	virtual int GetAttPoint();
	virtual int GetDefPoint();
	virtual int GetNum();
	virtual void PlusNum(int num);
	virtual void MinusNum(int num);
	virtual bool Use(Player* player);
	virtual void EquipItem(Player* player);
	virtual void Print();

};