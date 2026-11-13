#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите N: ";
    cin >> n;

    int original = n;
    int count = 0;
    int total = 0;
    int product = 1;
    int reversedNum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        ++count;
        total += digit;
        product *= digit;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    cout << "Количество цифр: " << count << endl;
    cout << "Сумма цифр: " << total << endl;
    cout << "Произведение цифр: " << product << endl;
    cout << "Перевернутое число: " << reversedNum << endl;

    return 0;
}