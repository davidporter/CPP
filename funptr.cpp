#include <iostream>

void func();

int main()
{
    int* func_ptr = (int*)(func);

    std::cout << func() << std::endl;
    std::cout << "func()'s address is " << func_ptr << std::endl;
    std::cout << "func " << func << std::endl;
    std::cout << "&func " << func << std::endl; 

}

void func(){
    std::cout << "ima fun function";
}