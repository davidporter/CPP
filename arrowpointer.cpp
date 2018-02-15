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
        void Print(int n) const { std::cout << "Hi David! "<< n << std::endl; }
        void Print() const { std::cout << "Hi David! " << std::endl; }
    };

    note c;
    note* ptr_c = &c;
    Entity e;
    Entity* ptr_e = &e;

    c.duration = 0.25;
    c.note_name = 'c';
    c.intensity = "forte";

    std::cout << c.intensity << std::endl;

    // derefrence note pointer 
    note& dref_ptr_c = *ptr_c;
    std::cout << dref_ptr_c.intensity << std::endl;

    // derefrences note pointer - with ->
    ptr_c->intensity = "Mezzo";
    std::cout << ptr_c->intensity << std::endl;   

    // dereference pointer
    (*ptr_c).intensity = "piano";
    std::cout << (*ptr_c).intensity << std::endl;    



    std::cout << "Now for the entity: " << std::endl;
    e.Print(37);
    ptr_e->Print(38);    // arrow operator allow access to method in class 
}