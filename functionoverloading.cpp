#include <iostream>

void dome(int);
void dome(char);

int main() 
{
    dome(1);
    dome('d');
}

void dome(int n)
{
    std::cout << n << std::endl;
}

void dome(char c)
{
    std::cout << c << std::endl;
}