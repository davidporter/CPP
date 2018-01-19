#include <iostream>

int main()
{
	int ducks = 12;
	int * ptr;
	ptr = &ducks;

	std::cout << ptr << std::endl;
}
