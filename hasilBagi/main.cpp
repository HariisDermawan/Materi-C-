#include <iostream>
using namespace std;

int main()
{
    int bilangan1, bilangan2, hasil, sisa;

    cout << "PROGRAM MENGHITUNG HASIL BAGI\n";
    cout << "-------------------------------\n";

    cout << "Masukkan bilangan pertama (yang dibagi): ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua (pembagi): ";
    cin >> bilangan2;

    // Cek apakah pembagi bukan nol
    if (bilangan2 != 0)
    {
        hasil = bilangan1 / bilangan2;
        sisa = bilangan1 % bilangan2;

        cout << "\nHasil: " << bilangan1 << " ÷ " << bilangan2 << " = " << hasil << endl;

        if (sisa != 0)
        {
            cout << "Sisa bagi: " << sisa << endl;
        }
        else
        {
            cout << "Pembagian habis tanpa sisa." << endl;
        }
    }
    else
    {
        cout << "Error: Tidak bisa dibagi dengan 0!" << endl;
    }

    return 0;
}
