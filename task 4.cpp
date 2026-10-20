#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int w1, d;
    cout << "Введите количество недель (1-7): ";
    cin >> w1;
    cout << "Введите номер дня (1-7): ";
    cin >> d;
    for (int w = 1; w <= w1; ++1) {
        for (int d1 = 1; d1 <= 7; ++d1) {
            cout << w << "-" << d1 << "\n";
        }
    }

    return 0;
}
