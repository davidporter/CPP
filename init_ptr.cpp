// program initializes a pointer to an address

#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;
    int* ptt = &higgens;

    std::cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    return 0;
}