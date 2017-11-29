#include <iostream>
#include <string>

int main()
{
	std::string userName;
	std::cout << "Tell me your name? ";
	std::getline(std::cin, userName);
	std::cout << "Hi " << userName << ".\n";

	return 0;
}