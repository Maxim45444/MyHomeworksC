#include <iostream>
#include <windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cout << "������ �����: " << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "�� ����� 1" << endl;
		break;

	case 2:
		cout << "�� ����� 2" << endl;
		break;

	default:
		cout << "������� �����" << endl;
		break;
	}
}
