#include <iostream>
using namespace std;

class first
{
    int a;
    static int b;

    public:
    first(int x , int y)
    {
        a=x;
        b=y;
        
    }
    void show()
    {
        cout<<""<<a<<b<<endl;
    }
    static void display()
    {
        cout<<"The value of b = "<<b<<endl;
    }

};
int first::b=0;

int main()
{
    first obj1(10 , 20 );
    obj1.show();
    first obj2(200 , 300);
    obj2.show();
    first::display();
    obj1.show(); 
}