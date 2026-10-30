//Программа для проверки четности числа
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int a;
    cout << "Введите первое число" << endl;
    cin >> a;
    if (a % 2 == 0)     // Проверяем остаток от деления на 2
    {
        cout << "Четное" << endl;
    }
    else
    {
        cout << "Нечетное" << endl;
    }
    return 0;
}