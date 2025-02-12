#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 10;  // ʳ������ ��������� �����
    int arr[SIZE];        // ����� ��� ���������� ��������� �����
    int count = 0;        // ˳������� ��������� �����
    bool unique;          // ���� ��� �������� ����������

    srand(time(0));  // ����������� ���������� ���������� �����

    while (count < SIZE) {
        int num = rand() % 20 + 0;  // �������� ����� �� 1 �� 100
        unique = true;

        // ����������, �� ����� ��� � � �����
        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                unique = false;
                break;  // ����� � �����, ���� �������� �����
            }
        }

        // ���� ����� ��������, ������ ���� � �����
        if (unique) {
            arr[count] = num;
            count++;
        }
    }

    // ���� ��������� �����
    cout << "������� �������� �����: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}