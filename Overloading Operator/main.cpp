#include <iostream>

class Complex
{
public:
    int real, imag;

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
    {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main()
{
    Complex c1, c2, result;
    c1.real = 5;
    c1.imag = 3;
    c2.real = 2;
    c2.imag = 4;

    result = c1 + c2;
    result.display();
    return 0;
}