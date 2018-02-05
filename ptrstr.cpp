#include <iostream>

#include <cstring>

int main() {
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren"; 	// bird pointer is assigned the address of 'w'
	char * ps;

	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps << "\n";		// may displa garbage, may cause crash
	
	cout  << "Enter a kind of Animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
}
