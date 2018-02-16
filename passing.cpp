// I'm trying to pass in a pointer so that it changes the
// value at that address in the method
#include <iostream>

int byref(int*);
int byval(int);



int main()
{
	auto var = 7;
	auto var2 = 11;

	int* ptr = &var;

	std::cout << var << std::endl;
	std::cout << ptr << std::endl;

	byref(ptr);
	std::cout << var <<std::endl;

	byval(var2);  // does not change var2
	std::cout << var2 << std::endl;
}

int byref(int* ptr_int) {
	*ptr_int = 9;
	return 0;
}

int byval(int n) {
	n = 99;
	return 0;
}