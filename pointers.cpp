#include <iostream>

int main()
{
	int ducks = 12;
	int * ptr;
	ptr = &ducks;

	std::cout << ptr << std::endl;

	int myIntVar = 9;
	int * ipt = &myIntVar;

	std::cout << "address location of variable named myIntVar " << ipt << std::endl;

}
