#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n ,t=10;
    cout << "Введите число зон посадки(1-10) ";
    cin >> n;
    for (int i{ 1 }; i < n; i++)
    {
        t += 10;
    }
    cout << "\nПройдет " << t << " минут после 10:00";
}
