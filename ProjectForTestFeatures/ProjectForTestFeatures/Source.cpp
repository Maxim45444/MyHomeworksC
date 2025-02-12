#include <iostream>
#include <windows.h>

using namespace std;

void TaskEquality()// 1 завдання з теми if else 
{
	int FirstVal, SecondVal;

	cout << "Програма перевіряє два цілих введених числа на рівність\n";

	cout << "Введіть перше число:\n";
	cin >> FirstVal;

	cout << "Введіть друге число:\n";
	cin >> SecondVal;

	if (FirstVal == SecondVal)
	{
		cout << "Числа рівні\n";
	}
	else
	{
		cout << "Числа не рівні\n";
	}

}

void TaskDiv() // 2 завдання з теми if else
{
	int FirstVal, SecondVal;

	cout << "Програма ділить два цілих введених числа, та перевіряє залишок після ділення\n";

	cout << "Введіть перше число:\n";
	cin >> FirstVal;

	cout << "Введіть друге число:\n";
	cin >> SecondVal;

	if (SecondVal == 0)
	{
		cout << "На 0 ділити не можна! " << endl;
	}
	else if (FirstVal % SecondVal == 0)
	{
		cout << "Ділиться без залишку, результат: " << FirstVal / SecondVal << endl;
	}
	else if (FirstVal % SecondVal != 0)
	{
		cout << "Ділиться з залишком, результат: " << (double)FirstVal / SecondVal << endl;
	}
	else
	{
		cout << "Не коректні дані! " << endl;
	}

}

void TaskAudit()// 3 завдання з теми if else
{
	int Val;

	cout << "Програма перевіряє чи введенне числов діапазоні 1-100 більше/менше/дорівнює 50 \n";

	cout << "Введіть число:\n";
	cin >> Val;

	if (Val > 100|| Val < 0)
	{
		cout << "Число " << Val << " більше заданого діапазону!\n";
	}
	else if (Val < 50)
	{
		cout << "Число " << Val << " менше 50. \n";
	}
	else if (Val == 50)
	{
		cout << "Число " << Val << " дорівнює 50.\n";
	}
	else if (Val > 50)
	{
		cout << "Число " << Val << " більше 50.\n";
	}
}

void TaskTernary()// 4 завдання з теми if else викоритсання тернарного оператора
{
	int FirstVal, SecondVal;

	cout << "Програма перевіряє два цілих введених числа на рівність більше/менше/дорівнює\n";

	cout << "Введіть перше число:\n";
	cin >> FirstVal;

	cout << "Введіть друге число:\n";
	cin >> SecondVal;

	string Audit = (FirstVal > SecondVal) ? " Більше " :
		           (FirstVal < SecondVal) ? " Менше " : 
		                                  " Дорвінює ";
	cout << FirstVal << Audit << SecondVal << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice;

	do
	{
		cout << "Виберіть програму з списку яка має виконатись:\n";
		cout << "1.Програма перевіряє два цілих введених числа на рівність.\n";
		cout << "2.Програма ділить два цілих введених числа, та перевіряє залишок після ділення.\n";
		cout << "3.Програма перевіряє чи введенне числов діапазоні 1-100 більше/менше/дорівнює 50.\n";
		cout << "4.Програма перевіряє два цілих введених числа на рівність більше/менше/дорівнює.\n";
		cout << "0.Вихід.\n";
		cin >> choice;


		switch (choice)
		{
		case 1:

			TaskEquality();
			break;

		case 2:

			TaskDiv();
			break;

		case 3:

			TaskAudit();
			break;

		case 4:

			TaskTernary();
			break;

		case 0:

			cout << "Програма завершена\n";
			break;

		default:

			cout << "Помилка!\n";
			break;
		}
	} while (choice != 0);

	return(0);

}