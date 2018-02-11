#include <iostream>

int main()
{
	int * pps = new int;
	std::cout << "*pps before assignment = " << *pps << std::endl;
	
	*pps = 41;
	
	std::cout << "Value that pps point to: " << *pps << std::endl;
	std::cout << pps << std::endl;

	delete pps;			// removes the memory to which pps points, 
					// it does not remove the pointer itself

	std::cout << "After delete pps, the value *pps = " << *pps << std::endl;
	std::cout << pps << std::endl;

	char c = std::cin.get();

	std::cout << c << std::endl;
}
