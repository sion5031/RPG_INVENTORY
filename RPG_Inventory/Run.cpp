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
	cout << "캐릭터를 생성하겠습니다." << endl << endl << "새 캐릭터의 이름을 입력해주세요.(최대 10자)" << endl;
	PrintLine();

	cout << "이름: ";
	cin.getline(cName,11,'\n');

	system("cls");

	Player* newPlayer = new Player(cName);

	cout << "캐릭터가 다음과 같이 생성되었습니다." << endl;
	PrintLine();

	newPlayer->ShowPureStats();
	Sleep(sleepT);

	system("cls");
	cout << "게임에 진입합니다." << endl;
	PrintLine();
	Sleep(sleepT);

	while (true) {
		newPlayer->PlusHp(hpLost);
		newPlayer->PlusMp(mpLost);
		system("cls");
		cout << "플레이어가 Hp를 " << -hpLost << " 만큼  Mp를 " << -mpLost << " 만큼 감소하였습니다." << endl;
		PrintLine();

		newPlayer->ShowTotalStats();
		Sleep(sleepT);

		if (newPlayer->GetHp() <= 0)
		{
			system("cls");
			cout << "플레이어가 사망했습니다." << endl << endl << "게임을 종료합니다!!!" << endl;
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
				cout << newItem->GetName() << '(' << ranNum2 << ')' << " 을 발견했습니다!" << endl;
			}
			PrintLine();
			newPlayer->AddInventory(newItem);
		}
		else {
			cout << "아이템을 발견하지 못했습니다." << endl;
			PrintLine();
		}

		Sleep(sleepT);

		system("cls");
		cout << "작업을 선택해주세요." << endl;
		PrintLine();

		cout << "1. 인벤토리 확인" << endl << endl << "2. 계속 진행하기" << endl;
		PrintLine();
		cout << "선택(번호): ";
		cin >> select;
		system("cls");

		if (select == 1)
		{
			int selectInvenAction;
			newPlayer->ShowInventory();
			PrintLine();
			cout << "동작을 선택해주세요." << endl << endl;

			cout << "1. 아이템 이용" << endl << endl << "2. 아이템 이동" << endl << endl << "3. 계속 진행하기" << endl;
			PrintLine();
			cout << "선택(번호): ";
			cin >> selectInvenAction;
			system("cls");

			newPlayer->ShowInventory();

			if (selectInvenAction == 1)
			{
				int selectItem;
				cout << endl << "아이템을 선택해주세요: ";
				cin >> selectItem;
				system("cls");

				newPlayer->SelectItem(selectItem);
				Sleep(sleepT);
			}
			else if (selectInvenAction == 2)
			{
				int selectItems1, selectItems2;
				cout << endl << "위치를 바꾸거나 합칠 아이템을 2개 선택해주세요: ";
				cin >> selectItems1 >> selectItems2;
				system("cls");

				newPlayer->MoveItem(selectItems1, selectItems2);
				Sleep(sleepT);
			}
			else if (selectInvenAction == 3)
			{
				cout << endl << "모험을 계속 진행합니다." << endl;
				Sleep(sleepT);
			}
		}
		else if (select == 2)
		{
			continue;
		}

		if (newPlayer->FindItem(30) < 20)
		{
			cout << "아직 " << newPlayer->FindItem(30) << " 개 밖에 못 모았습니다." << endl;
			PrintLine();
			Sleep(sleepT);
		}
		else
		{
			cout << "축하합니다. 충분한 Dragon Tear 을 모았습니다." << endl;
			break;
		}




	}

	cout << "게임을 종료합니다!!!" << endl << endl;



	return 0;
}



void PrintLine()
{
	cout << "===============================================" << endl << endl;
}

void SetItem() {

}