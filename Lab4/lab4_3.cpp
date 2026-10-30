#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int a;
    cout << "Введите возраст" << endl;
    cin >> a;

    if (a < 0)      // Проверяем возраст по возрастанию (от меньшего к большему)
    {
        cout << "Неккоректный возраст";
    }
    else if (a <= 12)
    {
        cout << "Ребенок";
    }
    else if (a <= 17)
    {
        cout << "Подросток";
    }
    else if (a <= 64)
    {
        cout << "Взрослый";
    }
    else
    {
        cout << "Пожилой";          // Всё, что больше 64
    }

    return 0;
}