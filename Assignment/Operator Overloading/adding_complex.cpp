#include <iostream>
using namespace std;

class complex
{
    private:
    int real,img;
    public:
    complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    complex operator+(complex c)
    {
        complex temp;
        cout<<"Enter real and imaginary number ";
        cin>>real>>img;
        cout<<"Enter real and imaginary number ";
        cin>>c.real>>c.img;
        temp.real=real + c.real;
        temp.img=img + c.img;
        return temp;
    }
    void display()
    {
        cout<<"The sum of two complex number : "<<real<<"+i"<<img<<endl;
    }

};
int main()
{
    complex c1,c2,c3;
    c3=c1 + c2;
    c3.display();
}