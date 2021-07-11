#include <iostream>
using namespace std;

void functionfirst(int a)
{
    cout << " value of a before alteration " << a<<endl;
    a=5;
    cout << " value of a after alteration " << a<<endl;

}

void refernce(int &b)
{
    b=4;
    cout<< " value of b = "<<b<<endl;
}

int main()
{    
      int a=1;
      int b=2;
      functionfirst(a);
      refernce(b);
      cout << " value of a in main = " << a<<endl;
      cout << " value of b in main = " << b<<endl;
      
      
}

