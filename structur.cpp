// structur.cpp -- a simple structure
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main() 
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };  // guest is a structure variable of type inflatable

    inflatable pal = 
    {
        "Audacious Author",
        3.12,
        32.99
    };  // pal is a second variable of type inflatable

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    return 0;

}