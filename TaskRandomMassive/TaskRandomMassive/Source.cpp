#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 10;  // Кількість унікальних чисел
    int arr[SIZE];        // Масив для збереження унікальних чисел
    int count = 0;        // Лічильник унікальних чисел
    bool unique;          // Флаг для перевірки унікальності

    srand(time(0));  // Ініціалізація генератора випадкових чисел

    while (count < SIZE) {
        int num = rand() % 20 + 0;  // Генеруємо число від 1 до 100
        unique = true;

        // Перевіряємо, чи число вже є в масиві
        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                unique = false;
                break;  // Вихід з циклу, якщо знайдено дубль
            }
        }

        // Якщо число унікальне, додаємо його в масив
        if (unique) {
            arr[count] = num;
            count++;
        }
    }

    // Вивід унікальних чисел
    cout << "Унікальні випадкові числа: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}