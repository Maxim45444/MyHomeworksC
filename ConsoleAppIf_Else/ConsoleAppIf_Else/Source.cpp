#include<iostream>
#include<Windows.h>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x;
	cout << "Введіть число = " << endl;
	cin >> x;
	if(x%2==0)
		cout << "Число парне";
	else
		cout << "Число не парне";
}