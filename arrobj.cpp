// functions with array objects
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
// template < class T, size_t N > class array; http://www.cplusplus.com/reference/array/array/
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
const std::array<std::string, 3> triune = {"father", "son", "ghost"};

void fill(std::array<double, Seasons> * pa);
void show(std::array<double, Seasons> da);

void fillman(std::array<double, 3>* pb);
void showman(std::array<double, 3> db);

int main()
{
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);

    std::array<double, 3> man;
    fillman(&man);
    showman(man);

    return 0;
}

void fill(std::array<double, Seasons> * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << " : $ " << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

void fillman(std::array<double, 3>* pb) {
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter " << triune[i] << ": ";
        std::cin >> (*pb)[i];
    }
}

void showman(std::array<double, 3> db) {
    std::cout << "triune whatevs " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << triune[i] << " : " << db[i] << std::endl;
    }
}
