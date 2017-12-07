#include <iostream>
#include <vector>

template <typename T>
T dbl(T val)
{
    return val+val;
}

struct svm
{
    int phi;
};

svm fortune; // should this be declared at the 'global' scope or in the function that it is used?


int main()
{
    //template <typename U>
    fortune.phi = 9;
    int numin = 0.0;
    double numbin;
    std::vector<int> myVect;
    std::cout << "Hi David" << std::endl;
    std::cout << "Tell me a number: "; std::cin >> numbin;
    // std::cin >> numbin;
    std::cout << "doubles to: " << dbl(numbin) << std::endl;
    std::cout << "and your struct is " << fortune.phi << std::endl; 
}