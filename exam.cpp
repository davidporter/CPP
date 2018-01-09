Vendor : C++ Institute
Exam Name : C++ Certified Associate Programmer
           

*** *** QUESTION NO : 1 What will the variable "age" be in class B

class A
{
    int x;

  protected:
    int y;

  public:
    int age;
    A() { age = 5; };
};
class B : public A
{
    string name;

  public:
    B() { name = "Bob"; };
    void Print()
    {
        cout << name << age;
    }
};

A.public B.private C.protected D.None of these
 
         

     
   
#include <iostream>
#include <string>
    using namespace std;
class complex
{
    double re, im;

  public:
    complex() : re(1), im(0.4) {}
    complex operator? (complex &t);
    void Print() { cout << re << " " << im; }
};
complex complex::operator? (complex &t)
{
    complex temp;
    temp.re = this ? > re ? t.re;
    temp.im = this ? > im ? t.im;
    return temp;
}
int main()
{
    complex c1, c2, c3;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !3 c3 = c1
        c2;
    c3.Print();
}

A.It prints : 1 0.4B.It prints : 2 0.8 C.It prints : 0 0 D.It prints : 1 0.8  


*** *** QUESTION NO : 3 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class complex
{
    double re;
    double im;

  public:
    complex() : re(0), im(0) {}
    complex(double x) { re = x, im = x; };
    complex(double x, double y) { re = x, im = y; }
    void print() { cout << re << " " << im; }
};
int main()
{
    complex c1;
    c1 = 3.0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !4 c1.print();
    return 0;
}
A.It prints : 0 0B.It prints : 1 1 C.It prints : 3 3 D.Compilation error
     


*** *** QUESTION NO : 4 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
void fun(int);
int main()
{
    int a = 0;
    fun(a);
    return 0;
}
void fun(int n)
         
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !5
{
    if (n < 2)
    {
        fun(++n);
        cout << n;
    }
}

A.It prints : 21 B.It prints : 012 C.It prints : 0 D.None of these
     

*** *** QUESTION NO : 5 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int s(int n);
int main()
{
    int a;
    a = 3;
    cout << s(a);
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !6
}
int s(int n)
{
    if (n == 0)
        return 1;
 return s(n?1)*n;
}
A.It prints : 4B.It prints : 6 C.It prints : 3 D.It prints : 0  



*** *** QUESTION NO : 6 What will be the output of the program
   
#include <iostream>
    using namespace std;
int fun(int);
int main()
{
    cout << fun(5);
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !7
}
int fun(int i)
{
    return i * i;
}

A.25 B.5 C.0 D.1  



*** *** QUESTION NO : 7 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
#define FUN(arg) \
    if (arg)     \
        cout << "Test";
int main()
{
    int i = 1;
    FUN(i < 3);
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !8
}

A.It prints : 0
B.It prints : T
C.It prints : T0
D.It prints : Test
   


*** *** QUESTION NO : 8 What will the variable "y" be in class B
    class A
{
    int x;

  protected:
    int y;

  public:
    int age;
};
class B : private A
{
    string name;

  public:
    void Print()
    {
        cout << name << age;
    }
};
A.public  
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !9 B.private C.protected D.None of these
  


*** *** QUESTION NO : 9 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int main()
{
    float x = 3.5, y = 1.6;
    int i, j = 2;
    i = x + j + y;
    cout << i;
    return 0;
}

A.It prints : 7
B.It prints : 6 
C.It prints : 7, 1 
D.Compilation error
           

       
      
      
*** *** QUESTION NO : 10 What happens when you attempt to compile and
   
   
#include <iostream>
    using namespace std;
int main()
{
    int i = 1;
    if (i == 1)
    {
        cout << i;
    }
    else
    {
        cout << i - 1;
    }
    return 0;
}

A.It prints : 0
B.It prints : 1 
C.It prints : -1 
D.It prints : 2  

*** *** QUESTION NO : 11 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !11 using namespace std;
class complex
{
    double re, im;

  public:
    complex() : re(1), im(0.4) {}
    complex operator+(complex &t);
    void Print() { cout << re << " " << im; }
};
complex complex::operator+(complex &t)
{
    complex temp;
    temp.re = this ? > re + t.re;
    temp.im = this ? > im + t.im;
    return temp;
}
int main()
{
    complex c1, c2, c3;
    c3 = c1 + c2;
    c3.Print();
}

A.It prints : 1 0.4
B.It prints : 2 0.8 
C.It prints : 0 0 
D.Garbage value
             
 

*** *** QUESTION NO : 12 What happens when you attempt to compile and
     
   
#include <cstdlib>
#include <iostream>
    using namespace std;
float *sum(float a, float b);
float *sum(float a, float b)
{
    float *f = new float;
    *f = a + b;
    return f;
}
int main()
{
    float a, b, *f;
    a = 1.5;
    b = 3.4;
    f = sum(a, b);
    cout << *f;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !13 return 0;
}
A.It prints : 0B.It prints : 4.9 C.It prints : 5 D.It prints : 4  



*** *** QUESTION NO : 13 Which statement should be added in the following program to make work it correctly

using namespace std;
int main(int argc, const char *argv[])
{
    cout << "Hello";
}

A.#include<stdio.h>
B.#include<stdlib.h>
C.#include<iostream>
D.#include<conio.h>
   

*** *** QUESTIONNO : 14 What is the output of the program
   
#include <iostream>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !14 using namespace std;
int main()
{
    int tab[4] = {10, 20, 30, 40};
    tab[1] = 10;
    int *p;
    p = &tab[0];
    cout << *p;
    return 0;
}

A.It prints : 10
B.It prints : 20 
C.It prints : 11 
D.It prints : 30  

*** *** QUESTION NO : 15 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int fun(int x)
{
    return 2 * x;
}
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !15 int main()
{
    int i;
    i = fun(1) & fun(0);
    cout << i;
    return 0;
}

A.It prints : 0
B.It prints : 1 
C.It prints : -1 
D.Compilation error
    

*** *** QUESTION NO : 16 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class A
{
  public:
    virtual void Print() = 0;
};
class B : public A
{
  public:
    virtual void Print() { cout << "B"; }
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !16
};
class C : public A
{
  public:
    virtual void Print() { cout << "C"; }
};
int main()
{
    B ob2;
    C ob3;
    A *obj;
    obj = &ob2;
    obj ? > Print();
    obj = &ob3;
    obj ? > Print();
}

A.It prints : BC
B.It prints : CB
C.It prints : CC
D.It prints : BB
     

*** *** QUESTION NO : 17 What will the variable "age" be in class B
    class A
{
    int x;

  protected:
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !17 int y;

  public:
    int age;
};
class B : private A
{
    string name;

  public:
    void Print()
    {
        cout << name << age;
    }
};

A.public B.private C.protected D.None of these
     

  
*** *** QUESTION NO : 18 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int x = 5;
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !18 static int y;
int i = 0;
void static myFunction()
{
    y = x++ + ++i;
}
int main(int argc, const char *argv[])
{
    x++;
    myFunction();
    cout << y << " " << x << " " << i;
}
A.Compilation fails
       B.It prints : 5 5 0 C.It prints : 7 7 1 D.It prints : 6 5 1  



*** *** QUESTION NO : 19 Which of the structures is incorrect
    1
    : struct s1
{
    int x;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !19 long int li;
};
2 : struct s2
{
    float f;
    struct s2 *s;
};
3 : struct s3
{
    float f;
    struct s3 s;
};

A.1 B.2 C.3 D.2, 3  



*** *** QUESTION NO : 20 What is the output of the program
          
#include <iostream>
#include <string>
           using namespace std;
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !20 int main()
{
    string s1 = "Wo";
    string s2;
    s2 = s1;
    string s3;
    s3 = s2.append("rldHello");
    cout << s3;
    return (0);
}

A.It prints : WorldHello
B.It prints : HelloWo
C.It prints : World
D.It prints : Hello
     

*** *** QUESTION NO : 21 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class complex
{
    double re;
    double im;

  public:
    complex() : re(0), im(0) {}
    complex(double x) { re = x, im = x; };
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !21 complex(double x, double y) { re = x, im = y; }
    void print() { cout << re << " " << im; }
};
int main()
{
    complex c1(1, 2);
    c1.print();
    return 0;
}

A.It prints : 1 0
B.It prints : 1 1 
C.It prints : 1 2 
D.Compilation error
     

*** *** QUESTION NO : 22 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int fun(int x)
{
    return x << 2;
}
int main()
{
    int i;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !22 i = fun(1) / 2;
    cout << i;
    return 0;
}
A.It prints : 0B.It prints : 1 C.It prints : 2 D.It prints : 4  

*** *** QUESTION NO : 23 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
    int x;

  protected:
    int y;

  public:
    int z;
    A()
    {
        x = 1;
        y = 2;
        z = 3;
    }
};
 
class B : public A
{
    string z;

  public:
    void set()
    {
        y = 4;
        z = "John";
    }
    void Print()
    {
        cout << y << z;
    }
};
int main()
{
    B b;
    b.set();
    b.Print();
    return 0;
}

A.It prints : 4John
B.It prints : 2John 
C.It prints : 23 
D.It prints : 43  

  

*** *** QUESTION NO : 24   
#include <iostream>
#include <string>
    using namespace std;
const int size = 3;
class A
{
  public:
    string name;
    A() { name = "Bob"; }
    A(string s) { name = s; }
    A(A &a) { name = a.name; }
};
class B : public A
{
  public:
    B() {}
    B(string s) : A(s) {}
    void Print()
    {
        cout << name;
    }
};
int main()
{
    B b1("Alan");
    b1.Print();
    return 0;
}

A.It prints : 111Alan
B.It prints : Bob
C.It prints : Alan
D.It prints : 0  

*** *** QUESTION NO : 25 What is the output of the program given below
   
#include <iostream>
    using namespace std;
int main(int argc, const char *argv[])
{
    int i = 10;
    {
        int i = 0;
        cout << i;
    }
    {
        i = 5;
        cout << i;
    }
    cout << i;
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !26
}

A.1010 
B.101010 
C.055 
D.None of these
     

*** *** QUESTION NO : 26 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main(int argc, const char *argv[])
{
    int x, y;
    union t {
        char tab[2];
        int i;
    };
    union t u;
    u.tab[0] = 1;
    u.tab[1] = 2;
    u.i = 0;
    x = u.tab[0];
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !27 y = u.tab[1];
    cout << x << "," << y << "," << u.i;
    return 0;
}

A.compilation fails
B.It prints : 0, 0, 0 
C.It prints : 1, 2, 0 
D.None of these  

*** *** QUESTION NO : 27 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
using namespace std;
class A
{
  protected:
    int y;

  public:
    int x, z;
    A() : x(1), y(2), z(0) { z = x + y; }
    A(int a, int b) : x(a), y(b) { z = x + y; }
    void Print() { cout << z; }
};
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !28 class B : public A
{
  public:
    int y;
    B() : A() {}
    B(int a, int b) : A(a, b) {}
    void Print() { cout << z; }
};
int main()
{
    A b;
    b.Print();
    return 0;
}

A.It prints : 3
B.It prints : 0 
C.It prints : 1 
D.It prints : 2  



*** *** QUESTION NO : 28 Which code, inserted at line 10, generates the output "Hello World" ?

#include <iostream>
#include <string>
           "Pass Any Exam. Any Time." - 100 % Pass Guarantee !29 using namespace std;
string fun(string, string);
int main()
{
    string s = "Hello";
    string *ps;
    ps = &s;
    //insert code here
    return 0;
}
string fun(string s1, string s2)
{
    return s1 + s2;
}
A.cout << fun(" World");
B.cout << fun(*ps);
C.cout << fun("Hello");
D.cout << fun("Hello", " World");
 

*** *** QUESTION NO : 29 What happens when you attempt to compile and  run the following code? 
        
#include <iostream>
          
 "Pass Any Exam. Any Time." -
 100 % Pass Guarantee !30 using namespace std;
int x = 5;
static int y = 0;
void myFunction(int a)
{
    y = ++a;
}
int main(int argc, const char *argv[])
{
    int i = 0;
    myFunction(i);
    cout << y << " " << x;
}
A.It prints : 0 5B.It prints : 5 1 C.It prints : 1 5 D.It prints : 5 0  

*** *** QUESTION NO : 30  
 "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !31 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
class A
{
  public:
    void Print() { cout << "A"; }
};
class B : public A
{
  public:
    virtual void Print() { cout << "B"; }
};
class C : public B
{
  public:
    void Print() { cout << "C"; }
};
int main()
{
    A ob1;
    B ob2;
    C ob3;
    A *obj;
    obj = &ob1;
    obj ? > Print();
    obj = &ob2;
    obj ? > Print();
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !32 obj = &ob3;
    obj ? > Print();
}
A.It prints : BBB
B.It prints : AAA
C.It prints : ABC
D.It prints : ABB
     

*** *** QUESTION NO : 31 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
  public:
    int x;
};
class B : public A
{
  public:
    B() { x = 1; }
    B(int x) { this ? > x = x; }
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !33
};
int main()
{
    B c1;
    B c2(10);
    cout << c1.x;
    cout << c2.x;
    return 0;
}
A.It prints : 010B.It prints : 110 C.It prints : 00 D.It prints : 1  

 *** *** QUESTION NO : 32 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
void fun(char *);
int main()
         
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !34
{
    char t[4] = {'0', '1', '2', '3'};
    fun(&t[2]);
    return 0;
}
void fun(char *a)
{
    cout << *a;
}
A.It prints : 2B.It prints : 21 C.It prints : 00 D.It prints : 02  

QUESTIONNO : 33 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
  public:
    A() { cout << "A no parameters"; }
    A(string s) { cout << "A string parameter"; }
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !35 A(A & a) { cout << "A object A parameter"; }
};
class B : public A
{
  public:
    B() { cout << "B no parameters"; }
    B(string s) { cout << "B string parameter"; }
};
int main()
{
    A a2("Test");
    B b1("Alan");
    B b2(b1);
    return 0;
}
A.It prints : A no parametersA no parametersB string parameter
B.It prints : A string parameterA no parametersB string parameterA object A parameter
C.It prints : A no parametersB string parameter
D.It prints : A no parametersA no parameters
     

*** *** QUESTION NO : 34 What happens when you attempt to compile and  run the following code? 
     
          "Pass Any Exam. Any Time." -
          100 % Pass Guarantee !36
#include <iostream>
#include <string>
  using namespace std;
class A
{
  public:
    string s;
    A(string s) { this ? > s = s; }
};
class B
{
  public:
    string s;
    B(A a) { this ? > s = a.s; }
    void print() { cout << s; }
};
int main()
{
    A a("Hello world");
    B b = a;
    b.print();
}
 
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !37 A.It prints : Hello world
B.It prints : Hello
 C.Compilation error
     D.None of these
          

     *** *** QUESTION NO : 35 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int op(int x, int y);
int main()
{
    float *pf;
    float f = 0.9;
    pf = &f;
    cout << op(1, *pf);
    return 0;
}
int op(int x, int y)
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !38 return x * y;
}
A.It prints : 0B.It prints : 0.5 C.It prints : 1 D.It prints : ? 1  

*** *** QUESTION NO : 36 What happens when you attempt to compile and  run the following code? 
 ?
#include <iostream>
#include <string>
 using namespace std;
class First
{
    string *s;

  public:
    First() { s = new string("Text"); }
    ~First() { delete s; }
    void Print() { cout << *s; }
};
int main()
{
    First FirstObject;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !39 FirstObject.Print();
    FirstObject.~First();
}
A.It prints : Text
 B.Compilation error
     C.Runtime error.D.None of these
          

     *** *** QUESTION NO : 37 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class A
{
  public:
    virtual void Print() { cout << "A"; }
};
class B : public A
{
  public:
    void Print() { cout << "B"; }
};
int main()
         
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !40
{
    A *obj;
    A ob1;
    obj = &ob1;
    obj ? > Print();
    B ob2;
    obj = &ob2;
    obj ? > Print();
}
A.It prints : AB
B.It prints : AA
C.It prints : BA
D.It prints : BB
     

*** *** QUESTION NO : 38 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <sstream>
#include <string>
    using namespace std;
int main(void)
{
    string s;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !41 s = "Test";
 s.resize (s.size() ? 1);
 cout << s << " " << s.size();
 return 0;
}
A.It prints : Test 4B.It prints : Test 3 C.Compilation error
   D.It prints : Tes 3  

   *** *** QUESTION NO : 39 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class A
{
  public:
    int x;
    A() { x = 0; }
};
class B : public A
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !42 public : B() { x = 1; }
};
class C : private B
{
  public:
    C() { x = 2; }
};
int main()
{
    C c1;
    cout << c1.x;
    return 0;
}
A.It prints : 210B.It prints : 110 C.It prints : 010 D.Compilation error
     

  *** *** QUESTION NO : 40 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !43 using namespace std;
class A
{
  public:
    A() { cout << "A no parameters"; }
    A(string s) { cout << "A string parameter"; }
    A(A &a) { cout << "A object A parameter"; }
};
class B : public A
{
  public:
    B() { cout << "B no parameters"; }
    B(string s) { cout << "B string parameter"; }
    B(int s) { cout << "B int parameter"; }
};
int main()
{
    A a2("Test");
    B b1(10);
    B b2(b1);
    return 0;
}
A.It prints : A no parametersA no parametersB string parameter
B.It prints : A string parameterA no parametersB int parameterA object A parameter
    
 "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !44 C.It prints : A no parametersB string parameter
 D.It prints : A no parametersA no parameters
  

 *** *** QUESTION NO : 41 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
#include <iostream>
using namespace std;
class First
{
  public:
    void Print() { cout << "from First"; }
};
int main()
{
    First t[2];
    for (int i = 0; i < 2; i++)
        t[i].Print();
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !45
}
A.It prints : from First
B.It prints : from Firstfrom First
   C.Compilation error
       D.Runtime error. 

*** *** QUESTION NO : 42 What is the output of the program given below
   
#include <iostream>
    using namespace std;
int main(int argc, const char *argv[])
{
    int i = 10;
    {
        int i = 0;
        cout << i;
    }
    cout << i;
    return 0;
}
A.1010 B.100 C.010 D.None of these
             
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !46  

*** *** QUESTION NO : 43 What happens when you attempt to compile and
     
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
  public:
    int x;
    A() { x = 0; }
    A(int x) { this ? > x = x; }
};
class B : private A
{
  public:
    using A::x;
    B() { x = 1; }
    B(int x) { this ? > x = x; }
};
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !47 int main()
{
    B c1;
 B c2(?5);
 cout << c1.x;
 cout << c2.x;
 return 0;
}
A.It prints : 5B.It prints : 1 ? 5 C.It prints : 05 D.It prints : 0  

 *** *** QUESTION NO : 44 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main(int argc, const char *argv[])
{
    int a = 30, b = 1, c = 5, i = 10;
    i = b < a < c;
    cout << i;
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !48
}
A.compilation fails
   B.It prints : 10 C.It prints : 0 D.It prints : 1  

*** *** QUESTION NO : 45 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
class B;
class A
{
    int age;

  public:
    A() { age = 5; };
    friend class B;
};
class B
{
    string name;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !49 public : B() { name = "Bob"; };
    void Print(A ob)
    {
        cout << name << ob.age;
    }
};
int main()
{
    A a;
    B b;
    b.Print(a);
    return 0;
}
A.It prints : Bob5
B.It prints : Bob
C.It prints : 5 D.None of these
        

 *** *** QUESTION NO : 46 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !50 int i = 1;
    if (--i == 1)
    {
        cout << i;
    }
    else
    {
        cout << i - 1;
    }
    return 0;
}
A.It prints : 0B.It prints : 1 C.It prints : -1 D.It prints : 2  

         *** *** QUESTION NO : 47 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
void fun(int &i);
int main()
{
    int i = 2;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !51 fun(i);
    cout << i;
    return 0;
}
void fun(int &i)
{
    i += 2;
}
A.It prints : 2B.It prints : 0 C.It prints : 4 D.It prints : 16  

         *** *** QUESTION NO : 48 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int fun(int x);
int main()
{
    cout << fun(0);
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !52
}
int fun(int x)
{
    if (x > 0)
        return fun(x - 1);
    else
        return 100;
}
A.It prints : 0B.It prints : 10 C.It prints : 100 D.It prints : -1  

*** *** QUESTION NO : 49 What is the output of the program if character 2 is supplied as input
   
#include <iostream>
    using namespace std;
int main()
{
    int c;
    cin >> c;
    try
    {
        switch (c)
             
  "Pass Any Exam. Any Time." -
  100 % Pass Guarantee !53
            {
            case 1:
  throw 20;
            case 2:
  throw 5.2f;
            }
    }
    catch (int e)
    {
        cout << "int exception. Exception Nr. " << e;
    }
    catch (float e)
    {
        cout << "float exception. Exception Nr. " << e;
    }
    catch (...)
    {
        cout << "An exception occurred.";
    }
    return 0;
}
A.It prints : float exception.Exception Nr.B.It prints : int exception.Exception Nr.20 C.It prints : An exception occurred
    D.It prints : float exception.Exception Nr.5.2  

 *** *** QUESTION NO : 50 What is the output of the program if character 4 is supplied as input
   
#include <iostream>
    using namespace std;
int main()
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !54 int c;
    cin >> c;
    try
    {
        switch (c)
        {
        case 1:
            throw 20;
        case 2:
            throw 5.2f;
        case 3:
            throw 'a';
        default:
            cout << "No exception";
        }
    }
    catch (int e)
    {
        cout << "int exception. Exception Nr. " << e;
    }
    catch (float e)
    {
        cout << "float exception. Exception Nr. " << e;
    }
    catch (...)
    {
        cout << "An exception occurred.";
    }
    return 0;
}
A.It prints : float exception.Exception Nr.B.It prints : int exception.Exception Nr.C.It prints : An exception occurred
 D.It prints : No exception
      
 "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !55  

        *** *** QUESTION NO : 51 Which code,
    inserted at line 14, generates the output "3.14 10" ?
#include <iostream>
     using namespace std;
namespace myNamespace1
{
int x = 5;
int y = 10;
}
namespace myNamespace2
{
float x = 3.14;
float y = 1.5;
}
int main()
{
    //insert code here
    cout << x << " " << y;
    return 0;
}
A.using myNamespace2::y;
using myNamespace1::x;
B.using namespace myNamespace1;
C.using namespace myNamespace1;
using namespace myNamespace2;
D.using myNamespace1::y;
using myNamespace2::x;
 
  
         "Pass Any Exam. Any Time." -
         100 % Pass Guarantee !56

*** *** QUESTION NO : 52 What is the output of the program
   
#include <iostream>
#include <string>
    using namespace std;
int main()
{
    string s1[] = {"Hello", "World"};
    for (int i = 0; i < 2; i++)
    {
        cout << s1[i];
    }
    return (0);
}
A.It prints : HelloWorld
B.It prints : Hello
C.It prints : WorldHello
D.It prints : World
     

*** *** QUESTION NO : 53  
 "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !57 Which code,
    inserted at line 8, generates the output "0102020" ?
#include <iostream>
    using namespace std;
class Base
{
    static int age;

  public:
    Base(){};
    ~Base(){};
    //insert code here
    void Print() { cout << age; }
};
int Base::age = 0;
int main()
{
    Base a, *b;
    b = new Base();
    a.Print();
    a.setAge(10);
    a.Print();
    b ? > setAge();
    a.Print();
    b ? > Print();
    return 0;
}
A.void setAge(int a) { age = a; }
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !58 B.void setAge() { age = 20; }
C.void setAge() { age = 10; }
D.void setAge(int a = 20) { age = a; }
 

*** *** QUESTION NO : 54 What happens when you attempt to compile and  run the following code? 
        
#include <iostream>
         using namespace std;
class First
{
  public:
    void Print() { cout << "from First"; }
};
class Second
{
  public:
    void Print() { cout << "from Second"; }
};
int main()
{
    First FirstObject;
    FirstObject.Print();
    Second SecondObject;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !59 SecondObject.Print();
}
A.It prints : from First
B.It prints : from Firstfrom First
C.It prints : from Firstfrom Second
D.It prints : from Secondfrom Second
     

*** *** QUESTION NO : 55 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main(int argc, char *argv[])
{
    char *s = "ABCDEF";
    cout << s + 2;
    return 0;
}
A.It prints : CDEF
B.It prints : ABCDEF
C.It prints : BCDEF
   D.None of these
        

    
  "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !60*** *** QUESTION NO : 56 Which of the following can be checked in a switch
    case statement ? A.char
          B.int
  C.enum D.double
  Answer
    : A,
    B, C

          *** *** QUESTION NO
    : 57 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
    int x;

  protected:
    int y;

  public:
    int z;
};
class B : public A
{
    string name;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !61 public : void set()
    {
        y = 2;
        z = 3;
    }
    void Print() { cout << y << z; }
};
int main()
{
    B b;
    b.set();
    b.Print();
    return 0;
}
A.It prints : 123B.It prints : 000 C.It prints : 23 D.It prints : 12  

*** *** QUESTION NO : 58 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class A
         
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !62 {
        public :
            void Print(){cout << "A";
}
}
;
class B : public A
{
  public:
    void Print() { cout << "B"; }
};
int main()
{
    A *obj;
    A ob1;
    obj = &ob1;
    obj ? > Print();
    B ob2;
    obj = &ob2;
    obj ? > Print();
}
A.It prints : AB
B.It prints : AA
C.It prints : BA
D.It prints : BB
     

*** *** QUESTION NO : 59  
 "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !63 What happens when you attempt to compile and
     
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
  protected:
    int y;

  public:
    int x;
    int z;
    A()
    {
        x = 2;
        y = 2;
        z = 3;
    }
    A(int a, int b) : x(a), y(b) { z = x ? y; }
    void Print()
    {
        cout << z;
    }
};
int main()
{
    A a(2, 5);
    a.Print();
    return 0;
}
A.It prints : ? 3  
   "Pass Any Exam. Any Time." -
   100 % Pass Guarantee !64B.It prints
  : 2 C.It prints : 6 D.It prints : 5  

QUESTIONNO : 60 What happens when you attempt to compile and
    
 
#include <iostream>
  using namespace std;
void fun(int *);
int main()
{
    int i = 2;
    fun(&i);
    cout << i;
    return 0;
}
void fun(int *i)
{
    *i = *i * *i;
}
 
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !65 A.It prints : 1B.It prints : 4 C.It prints : 10 D.It prints : 0  

*** *** QUESTION NO : 61 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int main()
{
    int x = 2, *y;
    y = &x;
    cout << *y + x;
    return 0;
}
A.It prints : 1B.It prints : 2 C.It prints : 4 D.It prints : 0  

        *** *** QUESTION NO : 62  
     "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !66 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int main()
{
    int *i;
    i = new int;
    *i = 1.0 / 2 * 2 / 1 * 2 / 4 * 4;
    cout << *i;
    return 0;
}
A.It prints : 0B.It prints : 1 C.It prints : 2 D.It prints : 0.5  

          *** *** QUESTION NO : 63 Which of the following statements are correct about an array
    int tab[10];
A.The array can store 10 elements.B.The expression tab[1] designates the very first element in the array.C.The expression tab[9] designates the last element in the array.D.It is necessary to initialize the array at the time of declaration. , C

    "Pass Any Exam. Any Time." -
            100 % Pass Guarantee !67*** *** QUESTION NO : 64 Which of the following is a logical operator
        A.& B.&& C.|| D.!Answer
        : B,
    C, D

*** *** QUESTION NO : 65 How could you pass arguments to functions
           A.by value
   B.by reference
    C.by pointer
        D.by void
            Answer
           : A,
    B, C

       *** *** QUESTION NO : 66 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    int i, j;
    for (i = 0, j = 1; j < 2, i < 4; i++, j++)
        ;
    cout << i << " " << j;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !68 return 0;
}
A.It prints : 4 5B.It prints : 2 3 C.It prints : 3 2 D.It prints : 4 3  

*** *** QUESTION NO : 67 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <cstdarg>
    using namespace std;
int mult(int f, int s, int t);
int main()
{
    cout << mult(1, 2, 3);
    return 0;
}
int mult(int f, int s, int t)
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !69 int mult_res;
    mult_res = f * s * t;
    return mult_res;
}
A.It prints : 0B.It prints : 6 C.It prints : 2 D.It prints : 3  

        *** *** QUESTION NO : 68 Which code,
    inserted at line 5, generates the output "ABC" ?
#include <iostream>
 using namespace std;
class A
{
  public:
    //insert code here
};
class B : public A
{
  public:
    void Print() { cout << "B"; }
};
class C : public B
{
  public:
    void Print() { cout << "C"; }
};
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !70 int main()
{
    A ob1;
    B ob2;
    C ob3;
    A *obj;
    obj = &ob1;
    obj ? > Print();
    obj = &ob2;
    obj ? > Print();
    obj = &ob3;
    obj ? > Print();
}
A.void Print() { cout << "A"; }
B.virtual void Print() { cout << "A"; }
C.virtual void Print(string s) { cout << s; }
D.None of these
     

  *** *** QUESTION NO : 69 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class BaseClass
         
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !71
{
  public:
    int *ptr;
    BaseClass(int i) { ptr = new int(i); }
    ~BaseClass()
    {
        delete ptr;
        delete ptr;
    }
    void Print() { cout << *ptr; }
};
void fun(BaseClass x);
int main()
{
    BaseClass o(10);
    fun(o);
    o.Print();
}
void fun(BaseClass x)
{
    cout << "Hello:";
}
A.It prints : Hello : 1B.It prints : Hello : C.It prints : 10 D.Runtime error. 

         
    "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !72*** *** QUESTION NO : 70 What will happen when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int getValue();
int main()
{
    const int x = getValue();
    cout << x;
    return 0;
}
int getValue()
{
    return 5;
}
A.It will print 0 B.The code will not compile.C.It will print 5 D.It will print garbage value
         

   *** *** QUESTION NO : 71 What happens when you attempt to compile and
     
     
          "Pass Any Exam. Any Time." -
          100 % Pass Guarantee !73
#include <iostream>
#include <string>
  using namespace std;
class A
{
  public:
    A() { cout << "A0 "; }
    A(string s) { cout << "A1"; }
};
class B : public A
{
  public:
    B() { cout << "B0 "; }
    B(string s) { cout << "B1 "; }
};
class C : private B
{
  public:
    C() { cout << "C0 "; }
    C(string s) { cout << "C1 "; }
};
int main()
{
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !74 B b1;
    C c1;
    return 0;
}
A.It prints : A0 B0 A0 B1 A0 C0 A0 C1
B.It prints : B0 B1 C0 C1
C.It prints : A0 B0 A0 B0 C0
D.It prints : B0 B1
     

*** *** QUESTION NO : 72 What is the output of the program
   
#include <iostream>
#include <string>
    using namespace std;
struct Person
{
    int age;
};
class First
{
    Person *person;

  public:
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !75 First()
    {
        person = new Person;
        person ? > age = 20;
    }
    void Print()
    {
        cout << person ? > age;
    }
};
int main()
{
    First t[2];
    for (int i = 0; i < 2; i++)
        t[i].Print();
}
A.It prints : 10B.It prints : 2020 C.It prints : 22 D.It prints : 00  

*** *** QUESTION NO : 73 What happens when you attempt to compile and  run the following code? 
   
#include <cstdlib>
#include <iostream>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !76 using namespace std;
inline float sum(float a, float b)
{
    return a + b;
}
int main()
{
    float a, b;
    a = 1.5;
    b = 3.4;
    cout << sum(a, b);
    return 0;
}
A.It prints : 0B.It prints : 4.9 C.It prints : 5 D.It prints : 4  

          *** *** QUESTION NO : 74 What is the output of the program
   
#include <iostream>
#include <string>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !77 using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";
    s1 += s2;
    cout << s1;
    return (0);
}
A.It prints : HelloWorld
B.It prints : Hello
C.It prints : World
D.It prints : HelWorld
     

*** *** QUESTION NO : 75 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
#define DEF_A 0
#define DEF_B DEF_A + 1
#define DEF_C DEF_B + 1
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !78 int main(int argc, char *argv[])
{
    cout << DEF_C;
    return 0;
}
A.It prints : 2B.It prints : 10 C.It prints : 0 D.It prints : 1  

         *** *** QUESTION NO : 76 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
void set(struct person *);
struct person
{
    int age;
};
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !79 int main()
{
    struct person e = {18};
    set(&e);
    cout << e.age;
    return 0;
}
void set(struct person *p)
{
    p ? > age = p ? > age + 1;
}
A.It prints : 18B.It prints : 19 C.It prints : 20 D.It prints : 0  

QUESTIONNO : 77 Point out an error in the program.
#include <iostream>
        using namespace std;
int main()
{
    const int x = 1;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !80 int const *y = &x;
    cout << *y;
    return 0;
}
A.No error
    B.Error : unknown pointer conversion
 C.cannot convert from 'const int *' to 'int *const' D.Compilation error
      

 *** *** QUESTION NO : 78 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    int i = 2;
    switch (i)
    {
    case 1:
        cout << "Hello";
    case 2:
        cout << "world";
    case 3:
         
  "Pass Any Exam. Any Time." -
  100 % Pass Guarantee !81 cout
            << "End";
    }
    return 0;
}
A.It prints : Hello
B.It prints : world
C.It prints : worldEnd
D.It prints : End
     

*** *** QUESTION NO : 79 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class complex
{
    double re;
    double im;

  public:
    complex() : re(0), im(0) {}
    complex(double x) { re = x, im = x; };
    complex(double x, double y) { re = x, im = y; }
    void print() { cout << re << " " << im; }
};
int main()
{
    complex c1;
    double i = 2;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !82 c1 = i;
    c1.print();
    return 0;
}
A.It prints : 0 0B.It prints : 1 1 C.It prints : 2 0 D.It prints : 2 2  

*** *** QUESTION NO : 80 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
#include <string>
    using namespace std;
int f(int i, int b);
int main()
{
    int i = 0;
    i++;
    for (i = 0; i <= 2; i++)
    {
        cout << f(0, i);
         
            "Pass Any Exam. Any Time." -
            100 % Pass Guarantee !83
    }
    return 0;
}
int f(int a, int b)
{
    return a + b;
}
A.It prints : 202020B.It prints : 012 C.It prints : 0 D.It prints : 2  

 *** *** QUESTION NO : 81 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
class Test
{
    float i, j;
};
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !84 class Add
{
  public:
    int x, y;
    Add(int a = 3, int b = 3)
    {
        x = a;
        y = b;
    }
    int result() { return x + y; }
};
int main()
{
    Test test;
    Add *padd;
    padd = &test;
    cout << padd ? > result();
    return 0;
}
A.It prints : 6B.It prints : 9 C.Compilation error
 D.It prints : 33  

*** *** QUESTION NO : 82 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !85 using namespace std;
class BaseC
{
    int *ptr;

  public:
    BaseC() { ptr = new int(10); }
    BaseC(int i) { ptr = new int(i); }
    ~BaseC() { delete ptr; }
    void Print() { cout << *ptr; }
};
int main()
{
    BaseC *o = new BaseC(5);
    o ? > Print();
}
A.It prints : 5B.It prints : 10 C.It prints : 1 D.It prints : 0  

         *** *** QUESTION NO : 83 What will happen when you attempt to compile and  
     
          "Pass Any Exam. Any Time." -
          100 % Pass Guarantee !86
#include <iostream>
  using namespace std;
int main()
{
    const char *s;
    char str[] = "Hello ";
    s = str;
    while (*s)
    {
        cout << *++s;
        *s++;
    }
    return 0;
}
A.It will print : "el " B.The code will not compile.C.It will print : "Hello " D.It will print garbage value
       

  *** *** QUESTION NO : 84 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !87 class A
{
  public:
    void print()
    {
        cout << "A ";
    }
};
class B
{
  public:
    void print()
    {
        cout << "B ";
    }
};
int main()
{
    B sc[2];
    A *bc = (A *)sc;
    for (int i = 0; i < 2; i++)
        (bc++)->print();
    return 0;
}
A.It prints : A A
B.It prints : B B
C.It prints : A B
D.It prints : B A
     

*** *** QUESTION NO : 85  
 "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !88 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int main()
{
    int x, y = 10;
    float f;
    f = 5.20;
    x = (int)f;
    cout << x << ", ";
    f = float(y);
    cout << f;
    return 0;
}
A.It prints : 5, 10B.It prints : 5.2, 10 C.It prints : 5.20, 10.0 D.It prints : 5.2, 10.00  

      *** *** QUESTION NO : 86 What happens when you attempt to compile and  run the following code? 
  
#include <iostream>
     "Pass Any Exam. Any Time." - 100 % Pass Guarantee !89 using namespace std;
int op(int x, int y)
{
    return x ? y;
}
int op(int x, float y)
{
    return x + y;
}
int main()
{
    int i = 1, j = 2, k, l;
    float f = 0.23;
    k = op(i, j);
    l = op(j, f);
    cout << k << "," << l;
    return 0;
}
A.It prints : ? 1, ? 1B.It prints : ? 1, 3 C.It prints : ? 1, 2 D.Compilation fails     "Pass Any Exam. Any Time." - 100 % Pass Guarantee !90

  *** *** QUESTION NO
       : 87 Which of the following statements are correct ? A.A function can be defined inside another function B.A function may have any number of return statements each returning different values.C.A function can return floating point value D.In a function two return statements should never occur. ,
  C

*** *** QUESTION NO : 88 Which code,
  inserted at line 15, generates the output "5 Bob" ?
#include <iostream>
#include <string>
 using namespace std;
class B;
class A
{
    int age;

  public:
    A() { age = 5; };
    friend void Print(A &ob, B &so);
};
class B
{
    string name;

  public:
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !91 B() { name = "Bob"; };
    //insert code here
};
void Print(A &ob, B &so)
{
    cout << ob.age << " " << so.name;
}
int main()
{
    A a;
    B b;
    Print(a, b);
    return 0;
}
A.friend void Print(A ob, B so);
B.friend void Print(A &ob, B &so);
C.friend void Print(A *ob, B *so);
D.None of these
     

  *** *** QUESTION NO : 89 What is the output of the program if characters 't',
    'e', 's' and 't' enter are supplied as input ?
#include <iostream>
#include <string>
    "Pass Any Exam. Any Time." - 100 % Pass Guarantee !92 using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << " " << s.length();
    return (0);
}
A.It prints : test 4B.It prints : test
   C.It prints : test 5 D.It prints : 4  

    *** *** QUESTION NO : 90 What happens if character 3 is entered as input
   
#include <iostream>
    using namespace std;
class A
{
  public:
    int i;
};
int main()
{
    int c;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !93 A obj;
    obj.i = 5;
    cin >> c;
    try
    {
        switch (c)
        {
        case A.throw 20;
            case B.throw 5.2f;
            case C.throw obj;
            default:
            cout << "No exception";
        }
    }
    catch (int e)
    {
        cout << "int exception. Exception Nr. " << e;
    }
    catch (A e)
    {
        cout << "object exception. Exception Nr. " << e.i;
    }
    catch (...)
    {
        cout << "An exception occurred.";
    }
    return 0;
}
A.It prints : object exception.Exception Nr.5B.It prints : int exception.Exception Nr.C.It prints : An exception occurred
    D.It prints : No exception
         

      
 "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !94*** *** QUESTION NO : 91 Point out an error in the program.
#include <iostream>
          using namespace std;
int main()
{
    char s1[] = "Hello";
    char s2[] = "world";
    char *const ptr = s1;
    *ptr = 'a';
    ptr = s2;
    return 0;
}
A.No error
    B.Cannot modify a const object
        C.Compilation error at line 9 D.None of these
 ,
    C

       *** *** QUESTION NO : 92 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !95 int main()
{
    int x = 20;
    int *ptr;
    ptr = &x;
    cout << *ptr;
    return 0;
}
A.It prints : 20B.It prints : 0 C.It prints address of ptr
 D.It prints : 2  

 *** *** QUESTION NO : 93 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    int x = 0;
    int *ptr;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !96 ptr = &x;
    cout << x << " " << *ptr;
    return 0;
}
A.It prints : 0 0B.It prints address of ptr
 C.It prints : 1 D.It prints : 2  

 *** *** QUESTION NO : 94 Given :
#include <iostream>
#include <exception>
    using namespace std;
int main()
{
    try
    {
        int *myarray = new int[1000];
    }
    catch (bad_alloc &)
             
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !97
    {
        cout << "Error allocating memory";
    }
    catch (exception &e)
    {
        cout << "Standard exception";
    }
    catch (...)
    {
        cout << "Unknown exception";
    }
    return 0;
}
What will happen if we use the operator “new” and the memory cannot be allocated ? A.It prints : Error allocating memoryB.It prints : Standard exception C.It prints : Unknown exception D.Compilation error  

     *** *** QUESTION NO : 95 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
 
    "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !98 struct
{
    int x;
    char c;
    union {
        float f;
        int i;
    };
} s;
int main(int argc, const char *argv[])
{
    s.x = 10;
    s.i = 0;
    cout << s.i << " " << s.x;
}
A.It prints : 0 10B.It prints : 11 C.Compilation error
    D.None of these
         

   *** *** QUESTION NO : 96 What is the output of the program
     
          "Pass Any Exam. Any Time." -
          100 % Pass Guarantee !99
#include <iostream>
#include <string>
  using namespace std;
int main()
{
    string s1 = "Hello", s2 = "World";
    s2 = s1 + s2;
    cout << s2;
    return 0;
}
A.It prints : Hello
B.It prints : HelloWorld
C.It prints : WorldHello
D.It prints : WorldHelloWorld
     

*** *** QUESTION NO : 97 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    int *t;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !100 t = new int[2];
    for (int i = 0; i < 2; i++)
    {
        t[i] = 0;
    }
    cout << t[1];
}
A.It prints : 0B.It prints : 1 C.It prints : 2 D.It prints : 3  

        *** *** QUESTION NO : 98 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    int x = 2, *y, z = 3;
    y = &z;
    cout << x * *y * x * **y;
    return 0;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !101
}
A.It prints : 36B.It prints : 14 C.It prints : 16 D.Compilation error
     

  *** *** QUESTION NO : 99 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
#define DEF_A 0
int main(int argc, char *argv[])
{
    cout << DEF_A;
    return 0;
}
A.It prints : 1B.It prints : 0 C.It prints : ? 1 D.Compilation error
 Answer
 : B

          
     "Pass Any Exam. Any Time." -
     100 % Pass Guarantee !102*** *** QUESTION NO : 100 What happens when you attempt to compile and
  
 ?
#include <iostream>
#include <exception>
 using namespace std;
class myClass : public exception
{
    virtual const char *what() const throw()
    {
        return "My exception.";
    }
} obj;
int main()
{
    try
    {
        throw obj;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
 
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !103 A.It prints : My exception.B.It prints : 0 C.It prints : 1 D.Compilation error
  

 *** *** QUESTION NO : 101 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
class A
{
  public:
    void Print() { cout << "A"; }
};
class B : public A
{
  public:
    virtual void Print() { cout << "B"; }
};
int main()
{
    A *obj;
    A ob1;
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !104 obj = &ob1;
    obj ? > Print();
    B ob2;
    obj = &ob2;
    obj ? > Print();
}
A.It prints : AB
B.It prints : AA
C.It prints : BA
D.It prints : BB
     

*** *** QUESTION NO : 102 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    const int x = 0;
    const int *ptr;
    ptr = &x;
    cout << *ptr;
    return 0;
}
 
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !105 A.It prints : 0B.It prints address of x
 C.It prints : 1 D.Compilation error
      

 *** *** QUESTION NO : 103 What happens when you attempt to compile and
     
   
#include <iostream>
    using namespace std;
int main()
{
    int i = 1;
    for (i = 10; i > -1; i /= 2)
    {
        if (!i)
            break;
    }
    cout << i;
    return 0;
}
A.It prints : 0B.It prints : 1 C.It prints : -1 D.Compilation error
    

             
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !106*** *** QUESTION NO : 104 What happens when you attempt to compile and
     
   
#include <iostream>
#include <string>
    using namespace std;
class A
{
  public:
    int x;
    A() { x = 0; }
};
class B
{
  public:
    int x;
    B() { x = 1; }
};
class C : public A, public B
{
  public:
    int x;
    C(int x)
    {
        this ? > x = x;
        A. : x = x + 1;
    }
    void Print() { cout << x << A::x << B::x; }
};
int main()
{
    C c2(1);
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !107 c2.Print();
    return 0;
}
B.It prints : 1 C.It prints : 121 D.It prints : 111 E.It prints : 2  

*** *** QUESTION NO : 105 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
namespace myNamespace1
{
int x = 5;
int y = 10;
}
namespace myNamespace2
{
float x = 3.14;
float y = 1.5;
}
int main()
{
    {
        using namespace myNamespace1;
        cout << x << " ";
         
            "Pass Any Exam. Any Time." -
            100 % Pass Guarantee !108
    }
    {
        using namespace myNamespace2;
        cout << y;
    }
    return 0;
}
A.It prints : 5 1.5B.It prints : 3.14 10 C.Compilation error
    D.None of these
         

   *** *** QUESTION NO : 106 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    float i = 1.0 / 2 * 2 / 1 * 2 / 4 * 4 / 2;
    cout << i;
    return 0;
}
A.It prints : 0B.It prints : 1 C.It prints : 2 D.It prints : 0.5  
            
       "Pass Any Exam. Any Time." -
    100 % Pass Guarantee !109*** *** QUESTION NO : 107 What is the output of the program
   
#include <iostream>
#include <string>
    using namespace std;
class First
{
    string name;

  public:
    First()
    {
        name = "Alan";
    }
    void Print()
    {
        cout << name;
    }
};
int main()
{
    First ob1, *ob2;
    ob2 = new First();
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !110 ob1.Print();
    ob2 ? > Print();
}
A.Garbage value
   B.It prints : AlanAlan
  C.It prints : Alan
    D.It prints : Al
        
  *** *** QUESTION NO : 108 What will the variable "age" be in class B
    class A
{
    int x;

  protected:
    int y;

  public:
    int age;
};
class B : protected A
{
    string name;

  public:
    void Print()
    {
        cout << name << age;
    }
     
        "Pass Any Exam. Any Time." -
        100 % Pass Guarantee !111
};
A.public B.private C.protected D.None of these
     
  *** *** QUESTION NO : 109 What happens when you attempt to compile and  run the following code? 
   
#include <iostream>
    using namespace std;
int main()
{
    const int x = 20;
    const int *ptr;
    ptr = &x;
    *ptr = 10;
    cout << *ptr;
    return 0;
}
A.It prints : 20B.It prints : 10 C.Compilation error at line 8 D.It prints address of ptr
   
             
        "Pass Any Exam. Any Time." -
            100 % Pass Guarantee !112 Trying our product !Guarantee &
        Policy |
    Privacy & Policy | Terms & Conditions Any charges made through this site will appear as Global Simulators Limited.All trademarks are the property of their respective owners.Copyright © 2004 - 2015,
    All Rights Reserved.
★ 100 % Guaranteed Success
★ 100 % Money Back Guarantee
★ 365 Days Free Update
★ Instant Download After Purchase
★ 24x7 Customer Support
★ Average 99.9 % Success Rate
★ More than 69, 000 Satisfied Customers Worldwide
★ Multi - Platform capabilities - Windows, Mac, Android, iPhone, iPod, iPad, Kindle Need Help Please provide as much detail as possible so we can best assist you.To update a previously submitted ticket : To Read the Whole Q &As, please purchase the Complete Version from Our website.