#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//Введите три числа и вьведите на зкран
	//значение суммь, произведения и среднее
	//арифметическое зтих чисел.

	double VarOne, VarTwo, VarThree;
	cout << "ВВедіть 3 числа" << endl;
	cin >> VarOne >> VarTwo >> VarThree;
	cout << "Cума всіх чисел = " << VarOne + VarTwo + VarThree<<endl;
	cout << "Добуток всіх чисел = " << VarOne * VarTwo * VarThree<<endl;
	cout << "AVG всіх чисел = " << (VarOne + VarTwo + VarThree)/3<<endl;

}