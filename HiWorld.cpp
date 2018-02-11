#include <iostream>

void HelloWorld()
{
   std::cout << "Hello World" << std::endl;
}

int main()
{

   auto function = HelloWorld;
   function();
   function();


   std::cin.get();
    
}
