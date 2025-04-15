#include <iostream>

int main() {
int num = 10;
int* ptr = &num;

std::cout << "Nilai num: " << num << std::endl;
std::cout << "Alamat pointer: " << ptr << std::endl;
std::cout << "Nilai melalui pointer: " << *ptr << std::endl;
return 0;
}