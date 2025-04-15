#include <iostream>
using namespace std;

int main()
{
    int tinggi;

    cout << "Masukkan tinggi segitiga piramida: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
    {
        // Spasi sebelum bintang
        for (int j = 1; j <= tinggi - i; j++)
        {
            cout << " ";
        }

        // Bintang
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
