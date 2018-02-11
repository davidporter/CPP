#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		cout << "word[0] " << word[0] << endl;
		word[0] = ch;
		cout << "word[0] = ch " << word[0] << endl;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}

