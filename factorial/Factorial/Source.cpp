#include <iostream>

int factorial(int n);

int main()
{
	std::cout << "Process Factorial" << std::endl;
	std::cout << factorial(3);
	std::cin.get();
	return 0;
}

int factorial(int n) {
	// set Base case for recursive function
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}