// this program demonstrates a generic class template

#include <iostream>

// this class ises a generic value
template <class T>
class Frigate
{
    private:
        int pounds;
        T length;
    
    public:
        Frigate(T length);
        void printLength();
};

template<class T>
Frigate<T>::Frigate(T input)
{
    length = input;
};

template<class T>
void Frigate<T>::printLength()
{
    std::cout << length;
};

// Frigate SSTrump = new Frigate();