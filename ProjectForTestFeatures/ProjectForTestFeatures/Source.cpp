#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    bool first = true;
    int Num1, Num2;

    cout << "Програма знаходить суму не парних чисел в заданому діапазоні.\n "
        "Введіть перше число: \n";
    cin >> Num1;
    cout << "Введіть друге число: \n";
    cin >> Num2;
    cout << "Сума не парних чисел:\n";

    do
    {
        if (Num1 % 2 != 0)
        {
            if (!first)
            {
                cout << " + ";
            }
            cout << Num1;
            sum += Num1;
            first = false;
        }
        Num1++;
    } while (Num1 <= Num2);

    cout << " = " << sum << endl;

}