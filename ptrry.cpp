#include <iostream>

int main() 
{
	int* ptrry = new int [2];

	ptrry[0] = 3;
	ptrry[1] = 7;

	std::cout << ptrry[0] << std::endl;

	return 0;
}

