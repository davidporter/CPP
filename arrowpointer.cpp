#include <iostream>
#include <string>

int main()
{
    struct note 
    {
        float duration;
        char note_name;
        std::string intensity;
    };

    class Entity{
        public:
        void Print() const { std::cout << "Hi David! " << std::endl; }
    };

    note c;
    note* d;
    Entity e;
    //Entity* ptr_f;


    c.duration = 0.25;
    c.note_name = 'c';
    c.intensity = "forte";

    // d->duration = 0.75;

    std::cout << c.intensity << std::endl;

    std::cout << "Now for the entity: " << std::endl;
    e.Print();
    // ptr_f->Print();                                                             // arrow operator allow access to entitypointer
}