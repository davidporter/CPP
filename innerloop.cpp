#include <iostream>

int main()
{
    int myArr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            myArr[i][j] = 100-i;
            std::cout << myArr[i][j] << std::endl;
        }
    }
}