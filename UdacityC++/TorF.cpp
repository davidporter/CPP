#include<iostream>


void runTable(int x, int y, int z);

int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    int A = 0;
    int B = 0;
    int C = 0;
    int Q;
    Q = (A && B && C) || (A && (!B || !C));

    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";

    
    runTable(0, 0, 0);
    runTable(0, 0, 1);
    runTable(0, 1, 0);
    runTable(0, 1, 1);
    runTable(1, 0, 0);
    runTable(1, 0, 1);
    runTable(1, 1, 0);
    runTable(1, 1, 1);

    return 0;
}

void runTable(int x, int y, int z)
{
  int q = (x && y && z) || (x && (!y || !z));
  
  std::cout<<x<<"\t"<<y<<"\t"<<z<<"\t\t"<<(x && y && z)<<"\t\t"<<(!y||z)<<"\t\t"<<(x&&(!y||!z))<<"\t\t"<<q<<"\n";
}