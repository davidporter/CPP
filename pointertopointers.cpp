// working with pointers to pointers
#include <iostream>

int main()
{
    int n = 9;

    int* ptr_n = &n;

    int ** ptr_ptr_n = &ptr_n;

    std::cout << "*ptr_n = &n \t\t\t  ptr_n = " << ptr_n << std::endl;
    std::cout << "**ptr_ptr_n = &ptr_n \t\t ptr_ptr_n = " << ptr_ptr_n << std::endl;
    std::cout << "dereference int**ptr_ptr_n: \t *ptr_ptr_n = " << *ptr_ptr_n << std::endl;
    std::cout << "dbl dereference int**ptr_ptr_n: \t **ptr_ptr_n = " << **ptr_ptr_n << std::endl;
}