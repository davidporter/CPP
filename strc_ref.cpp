// using structure references
#include <iostream>
#include <string>
struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    // partial initializations - remaining members set to zero
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three {"Minnie Max", 7, 9};
    free_throws four = {"Long Long", 6, 14};
    free_throws five = {"Throwgoods", 0, 0};

    //no initialization
    free_throws dup;

    set_pc(one);
    display(one)
}