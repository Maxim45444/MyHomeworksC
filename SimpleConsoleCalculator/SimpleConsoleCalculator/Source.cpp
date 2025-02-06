#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double varOne, varTwo;
	char operation;
	cout << "Введіть 2 числа" << endl;
	cin >> varOne >> varTwo;
	cout << "Введіть операцію" << endl;
	cin >> operation;
	switch (operation)
	{
	case '+': cout << varOne << " + " << varTwo << " = " << varOne + varTwo << endl;
		break;
	case '-': cout << varOne << " - " << varTwo << " = " << varOne - varTwo << endl;
		break;
	case '*': cout << varOne << " * " << varTwo << " = " << varOne * varTwo << endl;
		break;
	case '/':
	{
		if(varTwo!=0)
			cout << varOne << " / " << varTwo << " = " << varOne / varTwo << endl;
		else
			cout << varOne << " / " << varTwo << " = " << "Infinity" << endl;
	}
		break;
	default: cout << "невідома операція";
			break;
	}

}