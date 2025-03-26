#include "Equip.h"

Equip::Equip()
{
	this->equiped = false;
}

void Equip::SetEquipedTrue()
{
	equiped = true;
}

void Equip::SetEquipedFalse()
{
	equiped = false;
}

void Equip::Use()
{
	cout << this->GetName() << "은/는 사용할 수 없는 아이템입니다." << endl;
}

void Equip::Print()
{
	string eqStr = this->equiped ? "\t/\t(장비)" : "\t";
	cout << this->GetName() << eqStr << endl;
}
