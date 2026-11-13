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
    int reversedNum = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    if (original == reversedNum)
    {
        cout << original << " - палиндром" << endl;
    }
    else
    {
        cout << original << " - не палиндром" << endl;
    }

    return 0;
}