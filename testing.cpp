#include <iostream>

int main()
{
    std::cout << "Hi" << std::endl;

    int * pt = new int;

    float * pt1  = new float;
	
    std::cout << "giveme an array lenght: " << std::endl;


    int alen;
    std::cin >> alen;

    int myArr[alen];
    

    std::cout << pt << std::endl;
    std::cout << pt1 << std::endl;

}
