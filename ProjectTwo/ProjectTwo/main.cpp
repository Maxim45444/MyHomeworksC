#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//������� ��� ����� � �������� �� �����
	//�������� �����, ������������ � �������
	//�������������� ���� �����.

	int VarOne, VarTwo, VarThree;
	cout << "������ 3 �����" << endl;
	cin >> VarOne >> VarTwo >> VarThree;
	cout << "C��� ��� ����� = " << VarOne + VarTwo + VarThree<<endl;
	cout << "������� ��� ����� = " << VarOne * VarTwo * VarThree<<endl;
	cout << "AVG ��� ����� = " << (VarOne + VarTwo + VarThree)/3<<endl;

}