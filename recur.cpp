#include <iostream>
void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	
	std::cout << "counting down.. " << n << std::endl;
	if (n > 0)
	{
		countdown(n-1);
	}
	std::cout << ": Kaboom!\n";
}
