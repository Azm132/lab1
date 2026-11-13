#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите N: ";
    cin >> n;

    long long a = 0, b = 1;

    cout << "Первые " << n << " чисел фибоначи:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << a << " ";
        long long temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}