#include <iostream>
using namespace std;

class unary
{
    private:        
    int a,b,c;
    public:
    void getdata(int x,int y, int z)
    {
        a = x;
        b = y;
        c = z;

    }

void operator -()             //returntype operator op() eg + , -
{
    a = -a;
    b = -b;
    c = -c;

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
u.getdata(5,-10,20);
u.display();
-u;
u.display();
}

