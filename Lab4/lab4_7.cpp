#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b, c;

    cout << "Введите первую сторону" << endl;
    cin >> a;

    cout << "Введите вторую сторону" << endl;
    cin >> b;

    cout << "Введите третью сторону" << endl;
    cin >> c;

    if (a+b>c and a+c>b and b+c>a)          // Проверка неравенства треугольника
    {
        if (a==b && b==c)       // Определяем тип треугольника
        {
            cout << "Равносторонний";
        }
        else if (a==b || a==c || b==c)
        {
            cout << "Равнобедренный";
        }
        else
        {
            cout << "Разносторонний";
        }
    }
    else
    {
        cout << "Треугольник не существует";        // Не выполняется неравенство треугольника
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}