#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    string email;

    cout << "Введите email" << endl;
    cin >> email;

    // Ищем позицию символа @ и первой точки после него
    int at = email.find('@');
    int dot = email.find('.', at);

    // Упрощённая проверка: @ не в начале, точка есть после @ и не в конце
    if (at > 0 && dot > at + 1 && dot < email.length() - 1)
    {
        cout << "Email корректный";
    }
    else
    {
        cout << "Email неккоректный";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}