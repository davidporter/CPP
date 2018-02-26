#include <iostream>

int func();

int main()
{
    int* func_ptr = (int*)(func);
    std::cout << "func()'s address is " << func_ptr << std::endl;
}

int func(){
    std::cout << "ima fun function";
}