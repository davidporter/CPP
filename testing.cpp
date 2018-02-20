#include <iostream>

int main()
{
    std::cout << "Hi" << std::endl;

    int age = 41;
    const int * pt = &age;          // cannot change the value of a const int ponter
    int * pt_age = &age;

    std::cout << "pt = \t\t" << pt << std::endl;    // 0x61ff18
    std::cout << "pt_age = \t" << pt_age << std::endl;

    ++pt_age;
    std::cout << "\n " << "++pt_age \n";
    std::cout << "pt = \t\t" << pt << std::endl;    // 0x61ff18
    std::cout << "pt_age = \t" << pt_age << std::endl;

    std::cout << "*pt = \t\t" << *pt << std::endl;    // 0x61ff18
    std::cout << "*pt_age = \t" << *pt_age << std::endl;
    std::cout << "age = \t\t" << age << std::endl;
}
