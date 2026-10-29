#include <iostream>
#include <string>
#include <cwctype>
#include <io.h>
#include <fcntl.h>
#include <windows.h>
using namespace std;

int main() {
    // Включаем поддержку Unicode в консоли
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

    wstring str;
    int letters = 0, digits = 0, spaces = 0, puncts = 0;

    wcout << L"Введите строку: ";
    getline(wcin, str);

    for (wchar_t c : str) {
        if (iswalpha(c))
            letters++;
        else if (iswdigit(c))
            digits++;
        else if (iswspace(c))
            spaces++;
        else if (iswpunct(c))
            puncts++;
    }

    wcout << L"Букв:             " << letters << endl;
    wcout << L"Цифр:             " << digits << endl;
    wcout << L"Пробелов:         " << spaces << endl;
    wcout << L"Знаков препинания: " << puncts << endl;

    return 0;
}