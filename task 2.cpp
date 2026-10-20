#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, o=0, n=0;
    cout << "Введите массы багажа ";
    while (cin >> i && i !=0)
    {
        if (i > 0)
            o += i;
        if (i > 20)
            n ++ ;
    }
    cout << "\nОбщий вес = " << o << "\nКоличество тяжелых мест = " << n;
}
