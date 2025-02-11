#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	int height, width;
	cout << "Буде виведено квадра за відповіднимим параметрами :  "<<endl;
	cout << "Введіть довжину прямокутника = "; cin >> width;
	cout << "Введіть висоту прямокутника = "; cin >> height;
	for (int i = 0; i < height; i++)
	{
		for (int i = 0; i < width; i++)
			cout << "@";
		cout << "\n";
	}
}