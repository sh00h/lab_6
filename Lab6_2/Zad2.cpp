#include <Windows.h>
#include <iostream>
#include "Deque.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;
// ������� 2. ����������, ������������ ����� ������ �� �����:

// ������� ������ ��� ����: ����� �� ������ � ����� ���� � ������

// ������ ������ � ������ ��� �������: ������� ������� ������, � ����� ����� �������

// ������ �� ����� ��� ���: ����� ������� � � ������ � � �����

int main()
{
	setlocale(LC_ALL, "");
	Stack DirtyDishes;
	Queue Dishwasher1, Dishwasher2;
	Deque CleanDishes;
/* ��������� �������� : 
	1 - ���������� ������� ������ � ������������� ������
	2 - ������ ������ ���������� �� ������������� ������ � ������ ������ ������ �� �����
	3 - ��������� ������ �� ������ ����� � ������ ������� */
	// ��������� ��������� ������
	for (int i = 0; i < 10; i++)
	{
		DirtyDishes.add(1);
		Dishwasher1.add(1);
		Dishwasher2.add(1);
		CleanDishes.add_to_begin(1);
	}
	int choise;
	int dish = 1; // ����� ����� �� ���� ������ � �������. ������(����� ��������� ������������)
	int randch = 1; // ����� � ����� ������� ����� ��� �������� ������ ������ 
	bool b1=true, b2 = true, b3=true;
	while (true)
	{
		if (DirtyDishes.isEmpty())								// ������� ���� �������� �� �������.
		{														// ���� �����-�� �� ������ � ������� ������ �� �� �� �����
																// ������� �� ��� �������.
			b1 = false;											// ������� ������ ��������� ��������� �����, ��� ������� ���������� ����� ����� 
																// ������� �� ������
		}
		if (Dishwasher1.isEmpty() || Dishwasher2.isEmpty())
		{
			b2 = false;
		}
		if (CleanDishes.isEmpty())
		{
			b3 = false;
		}
		while (true) { // ���� �������� � ������ �����
			choise = rand() % 3 + 1;
			if (b1 && b2 && b3)
			{
				break;
			}
			else
			{
				if (b1 == false && choise != 1) break;				
				if (b2 == false && choise != 2) break;
				if (b3 == false && choise != 3) break;
			}
		}
		b1 = true; b2 = true; b3 = true;
		switch (choise)
		{
		case 1:
		{
			cout << "�������� ������� ������� � ������������� ������\n";
			DirtyDishes.del();
			if (dish == 1)
			{
				Dishwasher1.add(1);
				dish = 2;
			}
			else
			{
				Dishwasher1.add(1);
				dish = 1;
			}
			break;
		}
		case 2:
		{
			cout << "�������� ������ ������ �� ������ � ������\n";
			if (Dishwasher1.isEmpty())      // ���� ���� ������� ������, �� ����� ������� �� ������ �������
			{
				Dishwasher2.del();
				dish = 2;
			}
			else if (Dishwasher2.isEmpty())
			{
				Dishwasher1.del();
				dish = 1;
			}
			else {
				if (dish == 1)
				{
					Dishwasher2.del();
					dish = 2;
				}
				else
				{
					Dishwasher1.del();
					dish = 1;
				}
			}
			randch = rand() % 2 + 1;
			if (randch == 1) {
				CleanDishes.add_to_end(1);
			}
			else {
				CleanDishes.add_to_begin(1);
			}

			break;
		}
		case 3:
		{
			cout << "�������� ������ ������ � ������ �������\n";
			randch = rand() % 2 + 1;
			if (randch == 1) {
				CleanDishes.del_in_begin();
			}
			else {
				CleanDishes.del_in_end();
			}
			DirtyDishes.add(1);
			break;
		}
		}
		Sleep(2000); // �������� 2 �������
	}
	system("pause");
	return 0;
}