#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n;
    cout << "Введите число N: ";
    cin >> n;

    long long sumNumbers = 0;
    long long product = 1;
    long long sumSquares = 0;

    for (int i = 1; i <= n; ++i)
    {
        sumNumbers += i;
        product *= i;
        sumSquares += i * i;
    }
    cout << "Сумма: " << sumNumbers << endl;
    cout << "Произведение (N!): " << product << endl;
    cout << "Сумма квадратов: " << sumSquares << endl;

    return 0;
}