#include <iostream>
using namespace std;

int main()
{
    int a, b, sisa;

    cout << "PROGRAM SISA BAGI\n";
    cout << "------------------\n";

    cout << "Masukkan bilangan pertama (yang dibagi): ";
    cin >> a;

    cout << "Masukkan bilangan kedua (pembagi): ";
    cin >> b;

    if (b != 0)
    {
        sisa = a % b;
        cout << "Sisa dari " << a << " dibagi " << b << " adalah: " << sisa << endl;
    }
    else
    {
        cout << "Pembagi tidak boleh 0!" << endl;
    }

    return 0;
}
