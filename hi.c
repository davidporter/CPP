#include <iostream>
#include <vector>

template <typename T>
T dbl(T val)
{
    return val+val;
}

int main()
{
    //template <typename U>
    auto numin = 0.0;
    double numbin;
    std::vector<int> myVect;
    std::cout << "Hi David" << std::endl;
    std::cout << "Tell me a number: "; std::cin >> numbin;
    // std::cin >> numbin;
    std::cout << "doubles to: " << dbl(numbin) << std::endl;
}