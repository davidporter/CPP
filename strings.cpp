// adapted from C++ Primer Plus 

#include <iostream>
#include <string>
#include <cstring>  // for the strlen() function

int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    static char name2[Size] = "C++owboy";

    string myString;
    string stringy = "David";

    myString = stringy;

    cout << "Howdy! I'm " << name2;
    cout << "What's your name?\n";
    cin >> name1;
    stringy += name1;
    cout << "Well, " << myString << ", your name has ";
    cout << strlen(name1) << " letters and is stored in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your first initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    cout << "stringy = \"David\" " << std::endl;
    cout << "stringy += name1 " << stringy<<"\n"; 
    return 0;
}