#include <iostream>

int main()
{
    std::cout << "Hi" << std::endl;

    int * pt = new int;

    float * pt1  = new float;
	
    std::cout << "giveme an array lenght: " << std::endl;


    const int alen = 3;

    int myArr[alen];
    
    int anArr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        std::cout << anArr[i] << std::endl;
    }

    std::cout << pt << std::endl;
    std::cout << pt1 << std::endl;

}
