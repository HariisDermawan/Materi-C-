#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        throw std::runtime_error("Terjadi kesalahan!");
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}