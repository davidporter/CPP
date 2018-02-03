#include <iostream>

int main()
{
    std::cout << "Hi" << std::endl;

    int * pt = new int;

    float * pt1  = new float;

    class me {
    };
    
    me * ptme = new me; 
    std::cout << "Pointer Program" << std::endl;
    std::cout << pt << std::endl;
    std::cout << pt1 << std::endl;

}
