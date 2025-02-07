#include <iostream>
#include <windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cout << "Введіть число: " << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Ви ввели 1" << endl;
		break;

	case 2:
		cout << "Ви ввели 2" << endl;
		break;

	default:
		cout << "Невідоме число" << endl;
		break;
	}
}
