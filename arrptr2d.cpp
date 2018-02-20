// create an array with two dimensions
#include <iostream>

void showdata(int ar2[][4], int);

int main()
{
    int data[3][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }

    showdata(data, 4);

}

void showdata(int ar2[][4], int size)
{
    std::cout << "the argument 'ar2[][4]' used in the function is a pointer to the data array \n";

};