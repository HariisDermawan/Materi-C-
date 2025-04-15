#include <iostream>

int factorial(int n) {
if (n <= 1) return 1;
return n * factorial(n - 1);
}

int main() {
int num;
std::cout << "Masukkan bilangan: ";
std::cin >> num;
std::cout << "Faktorial dari " << num << " adalah " << factorial(num) << std::endl;
return 0;
}