#include<iostream>
#include<Windows.h>
using namespace std;
void TaskOne()
{
	int count, lineConsole = 0;
	char attribute; 
	cout << "Буде виведена лінія" << endl;
	cout << "Введіть довжину лінії = "; cin >> count;
	cout << "Введіть символ лінії = "; cin >> attribute;
	cout << "Введіть положення лінії"<<endl;
	cout << "1 - вертикальна"<<endl<<"2 - Горизонтальна"<<endl;
	cout << "= "; cin >> lineConsole;
	system("cls");
	if (lineConsole == 1)
		cout << "Line vertical"<<endl;
	if(lineConsole==2)
		cout << "Line Horizontal" << endl;
	while (count) 
	{
		if (lineConsole == 1)
			cout<< attribute<<endl;
		else if (lineConsole == 2)
			cout << attribute;
		count--;
	}	
}
void TaskTwo()
{
	int firstCounter, lastCounter, result,temp;
	cout << "Програма находить суму всіх цілих непарних числе у відповідному діапазоні" << endl;
	cout << "Введіть початкове значення діапазону = "; cin >> firstCounter;
	cout << "Введіть кінцеве значення діапазону = "; cin >> lastCounter;
	while (lastCounter>=firstCounter) 
	{
		if (firstCounter % 2 != 0) {
			cout << firstCounter << " ";
		}
		firstCounter++;
	}
}
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	TaskOne();
	/*1Разработать программу, которая выводит на экран линию из символов.
	Число символов, какой использовать символ, и какая будет линия - вертикальная,
	или горизонтальная - указывает пользователь.*/
	TaskTwo();
	/*2Написать программу, которая находит сумму всех 
	целых нечетных чисел в диапазоне, указанном пользователем.*/
}

