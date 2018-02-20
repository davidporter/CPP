// functions with string arguement
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";

    const char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');  // unsigned int because there is no negative in string
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)    // while the string contains values - terminates on /0 null character
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}