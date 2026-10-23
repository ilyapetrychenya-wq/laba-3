#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;

    do {
        cout << "Введите номер выхода (от 1 до 50): ";
        cin >> n;

        if (n < 1 || n > 50)
            cout << "Ошибка";
    } 
    while (n < 1 || n > 50);

    if (n <= 25) 
        cout << "\nЧисло находится в первой половине ";
    else
        cout << "\nЧисло находится во второй половине ";
    return 0;
}
