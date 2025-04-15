#include <iostream>

int main()
{
    int matrix[2][2] = {{1, 2}, {3, 4}};

    std::cout << "Matriks 2x2:" << std::endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}