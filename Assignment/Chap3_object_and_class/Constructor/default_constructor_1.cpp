#include <iostream>
using namespace std;

class construct
{
    public:
    int a ,b;
    construct()
    {
        a=50;
        b=60;
    }
};

int main()
{
    construct c;
    cout<<"a = "<<c.a<<endl;
    cout<<"b = "<<c.b<<endl;
    return 1;
}