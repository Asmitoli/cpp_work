# Constructor Overloading
The constructor overloading can be defined as the concept of having more than one constructor with different parameters so that every constructor can perform a different task.

# Why do we use constructor overloading in C++?

Benefits of constructor overloading in C++ is that, it gives the flexibility of creating multiple type of objects of a class by having more number of constructors in a class, called constructor overloading. In fact, it is similar to C++ function overloading that is also know as compile time polymorphism.

# Prerequisites Of Constructor Overloading

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

Overloaded constructors essentially have the same name (name of the class) and different number of arguments.
A constructor is called depending upon the number and type of arguments passed.
While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.


## C++ program to illustrate  Constructor overloading

#include <iostream>
using namespace std;
  
class construct
{ 
  
public:
    float area; 
      
    // Constructor with no parameters
    construct()
    {
        area = 0;
    }
      
    // Constructor with two parameters
    construct(int a, int b)
    {
        area = a * b;
    }
      
    void disp()
    {
        cout<< area<< endl;
    }
};
  
int main()
{

    // Constructor Overloading 
    // with two different constructors
    // of class name
    construct o;
    construct o2( 10, 20);
      
    o.disp();
    o2.disp();
    return 1;
}
