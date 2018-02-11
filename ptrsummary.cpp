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
	std::cout << "value of pi " << pi[0] << std::endl;
	std::cout << "pf " << pf << std::endl;
	std::cout << "value of pf that was never set " << *pf << std::endl;

	return 0;
}
