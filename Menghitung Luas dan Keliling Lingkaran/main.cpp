#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    float r, luas, keliling;

    cout << "PROGRAM LINGKARAN\n";
    cout << "-------------------\n";

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = PI * r * r;
    keliling = 2 * PI * r;

    cout << "Luas lingkaran      : " << luas << endl;
    cout << "Keliling lingkaran  : " << keliling << endl;

    return 0;
}
