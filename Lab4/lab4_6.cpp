#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int year;

    cout << "Введите год" << endl;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " - високосный год" << endl;
    } 
    else
    {
        cout << year << " - не високосный год" << endl;
    }
    return 0;
}