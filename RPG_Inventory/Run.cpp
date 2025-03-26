#include <Windows.h>

#include "Run_h.h"

void PrintLine();
void SetItem();

int main()
{
	char cName[11];
	const int sleepT = 1000;
	const int hpLost = -3;
	const int mpLost = -3;
	const int max_num = 4;
	const int max_inven = 99;
	int ranNum1, ranNum2;
	int select;

	srand(time(NULL));


	cout << "================ RPG_INVENTORY ================" << endl;
	PrintLine();

	cout << "                  Press Enter                  " << endl << endl;
	PrintLine();

	cin.ignore();

	system("cls");
	cout << "ĳ���͸� �����ϰڽ��ϴ�." << endl << endl << "�� ĳ������ �̸��� �Է����ּ���.(�ִ� 10��)" << endl;
	PrintLine();

	cout << "�̸�: ";
	cin.getline(cName,11,'\n');

	system("cls");

	Player* newPlayer = new Player(cName);

	cout << "ĳ���Ͱ� ������ ���� �����Ǿ����ϴ�." << endl;
	PrintLine();

	newPlayer->ShowPureStats();
	Sleep(sleepT);

	system("cls");
	cout << "���ӿ� �����մϴ�." << endl;
	PrintLine();
	Sleep(sleepT);

	while (true) {
		newPlayer->PlusHp(hpLost);
		newPlayer->PlusMp(mpLost);
		system("cls");
		cout << "�÷��̾ Hp�� " << -hpLost << " ��ŭ  Mp�� " << -mpLost << " ��ŭ �����Ͽ����ϴ�." << endl;
		PrintLine();

		newPlayer->ShowTotalStats();
		Sleep(sleepT);

		if (newPlayer->GetHp() <= 0)
		{
			system("cls");
			cout << "�÷��̾ ����߽��ϴ�." << endl << endl << "������ �����մϴ�!!!" << endl;
			PrintLine();
			break;
		}

		ranNum1 = rand() % 25;
		ranNum2 = rand() % max_num + 1;
		ranNum1 = 4;
		Item* newItem = nullptr;

		if (ranNum1 < 9) newItem = new DragonTear(ranNum2);
		else if (ranNum1 < 11) newItem = new HpPotion(ranNum2);
		else if (ranNum1 < 13) newItem = new MpPotion(ranNum2);
		else if (ranNum1 == 13) newItem = new LongSword();
		else if (ranNum1 == 14) newItem = new ShortSword();
		else if (ranNum1 == 15) newItem = new Upper();
		else if (ranNum1 == 16) newItem = new Lower();
		else if (ranNum1 == 17) newItem = new Glove();
		else if (ranNum1 == 18) newItem = new Shoes();
		else if (ranNum1 == 19) newItem = new Shield();
		
		system("cls");

		if (newItem) {
			if (ranNum1 < 13) {
				cout << newItem->GetName() << '(' << ranNum2 << ')' << " �� �߰��߽��ϴ�!" << endl;
			}
			PrintLine();
			newPlayer->AddInventory(newItem);
		}
		else {
			cout << "�������� �߰����� ���߽��ϴ�." << endl;
			PrintLine();
		}

		Sleep(sleepT);

		system("cls");
		cout << "�۾��� �������ּ���." << endl;
		PrintLine();

		cout << "1. �κ��丮 Ȯ��" << endl << endl << "2. ��� �����ϱ�" << endl;
		PrintLine();
		cout << "����(��ȣ): ";
		cin >> select;
		system("cls");

		if (select == 1)
		{
			int selectInvenAction;
			newPlayer->ShowInventory();
			PrintLine();
			cout << "������ �������ּ���." << endl << endl;

			cout << "1. ������ �̿�" << endl << endl << "2. ������ �̵�" << endl << endl << "3. ��� �����ϱ�" << endl;
			PrintLine();
			cout << "����(��ȣ): ";
			cin >> selectInvenAction;
			system("cls");

			newPlayer->ShowInventory();

			if (selectInvenAction == 1)
			{
				int selectItem;
				cout << endl << "�������� �������ּ���: ";
				cin >> selectItem;
				system("cls");

				newPlayer->SelectItem(selectItem);
				Sleep(sleepT);
			}
			else if (selectInvenAction == 2)
			{
				int selectItems1, selectItems2;
				cout << endl << "��ġ�� �ٲٰų� ��ĥ �������� 2�� �������ּ���: ";
				cin >> selectItems1 >> selectItems2;
				system("cls");

				newPlayer->MoveItem(selectItems1, selectItems2);
				Sleep(sleepT);
			}
			else if (selectInvenAction == 3)
			{
				cout << endl << "������ ��� �����մϴ�." << endl;
				Sleep(sleepT);
			}
		}
		else if (select == 2)
		{
			continue;
		}

		if (newPlayer->FindItem(30) < 20)
		{
			cout << "���� " << newPlayer->FindItem(30) << " �� �ۿ� �� ��ҽ��ϴ�." << endl;
			PrintLine();
			Sleep(sleepT);
		}
		else
		{
			cout << "�����մϴ�. ����� Dragon Tear �� ��ҽ��ϴ�." << endl;
			break;
		}




	}

	cout << "������ �����մϴ�!!!" << endl << endl;



	return 0;
}



void PrintLine()
{
	cout << "===============================================" << endl << endl;
}

void SetItem() {

}