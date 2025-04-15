#include <iostream>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout << "Maximum of 3 and 7: " << maximum(3, 7) << std::endl;
    std::cout << "Maximum of 3.5 and 2.5: " << maximum(3.5, 2.5) << std::endl;
    return 0;
}