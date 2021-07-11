#include <iostream>
using namespace std;

class unary
{
    private:
    int a,b,c;
    public:
    void getdata(int x,int y ,int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator +()
    {
        a ++;
        b ++;
        c ++;
    }
    void display()
    {
        cout<<"The value of a = "<<a<<endl;
        cout<<"The value of b = "<<b<<endl;
        cout<<"The value of c = "<<c<<endl;

    }
};

int main()
{
    unary u;
    u.getdata(10,-5,42);
    u.display();
    +u;
    u.display();
}