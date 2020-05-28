#include <Windows.h>
#include <iostream>
#include "Deque.h"
#include"Stack.h"
#include"Queue.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "�������� �������������� �������� ������.\n" << "����: \n";
	Stack st;
	cout << " �������� ��� ��������\n";
	for (int i = 1; i < 4; i++)
	{
		st.add(i);
	}
	cout << " �������� �� �������: ";
	if (st.isEmpty()) cout << "���� ������\n";
	else cout << "���� �� ������\n";
	cout << " ��������� �������: " << st.ret() << endl;
	cout << " ������ ��� �������� � �������� ���������: ";
	st.del(); st.del();
	cout << st.ret() << endl;
	cout << " ������ ��������� ������� � �������� �� �������: ";
	st.del();
	if (st.isEmpty()) cout << "���� ������\n";
	else cout << "���� �� ������\n";
	// ------------------------------------------------------------------------------
	cout << "�������: \n";
	Queue qu;
	cout << " �������� ������ ��������\n";
	for (int i = 1; i <= 4; i++)
	{
		qu.add(i);
	}
	cout << " �������� �� �������: ";
	if (qu.isEmpty()) cout << "������� ������\n";
	else cout << "������� �� ������\n";
	cout << " ��������� �������: " << qu.ret_last() << endl;
	cout << " ������ �������: " << qu.ret_first() << endl;
	cout << " ������ ��� �������� � �������� ������: ";
	qu.del(); qu.del();
	cout << qu.ret_first() << endl;
	cout << " ������ ��������� ��� ������� � �������� �� �������: ";
	qu.del(); qu.del();
	if (qu.isEmpty()) cout << "������� ������\n";
	else cout << "������� �� ������\n";
	//----------------------------------------------------------
	cout << "���: \n";
	Deque de;
	cout << " ������� ��� ��������: 2 � 3\n";
	de.add_to_begin(2); de.add_to_end(3);
	cout << " ��������, ������ �������: " << de.ret_first() << " , ��������� �������: " << de.ret_last() << endl;
	cout << " ������� � ������ 1, � � ����� 4 � 5" << endl;
	de.add_to_begin(1); de.add_to_end(4); de.add_to_end(5);
	cout << " ��������, ������ �������: " << de.ret_first() << " , ��������� �������: " << de.ret_last() << endl;
	cout << " ������ ������ � ���������\n";
	de.del_in_begin();
	de.del_in_end();
	cout << " ��������, ������ �������: " << de.ret_first() << " , ��������� �������: " << de.ret_last() << endl;
	cout << " �������� �� �������: ";
	if (de.isEmpty()) cout << "��� ������\n";
	else cout << "��� �� ������\n";
	cout << " ������ ���������� ��������\n";
	de.del_in_begin(); de.del_in_begin(); de.del_in_begin();
	cout << " �������� �� �������: ";
	if (de.isEmpty()) cout << "��� ������\n";
	else cout << "��� �� ������\n";

	system("pause");
	return 0;
}