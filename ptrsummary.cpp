#include <iostream>

int main() 
{
	// declaring pointers
	int* pi;
	float* pf;

	// assigning values (addreses) to pointers
	int someInt = 9;
	pi = &someInt;

	pf = new float;

	std::cout << pi << std::endl;
	std::cout << "pf " << pf << std::endl;

	return 0;
}
