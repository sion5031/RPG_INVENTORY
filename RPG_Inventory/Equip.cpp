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
	cout << this->GetName() << "��/�� ����� �� ���� �������Դϴ�." << endl;
}

void Equip::Print()
{
	string eqStr = this->equiped ? "\t/\t(���)" : "\t";
	cout << this->GetName() << eqStr << endl;
}
