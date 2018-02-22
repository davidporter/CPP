#include <iostream>
void countdown(int n);
void liftoff(int);

int main()
{
	countdown(4);
	liftoff(3);
	countdown(3);
	return 0;
}

void countdown(int n)
{
	
	std::cout << "counting down.. " << n << " " << &n << std::endl;
	if (n > 0)
	{
		countdown(n-1);
	}
	std::cout << ": Kaboom!\n";
}

void liftoff(int m)
{
	if (m > 0)
	{ 
		std::cout << m << " " << &m << std::endl; 
		liftoff(m -1);
	}
}

