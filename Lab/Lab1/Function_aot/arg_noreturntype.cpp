#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void area_of_triangle(float , float , float );
int main()
{
    float area,s,a,b,c;
    cout<<"Enter sides of Triangle";
    cout<<"Enter side a";
    cin>>a;
    cout<<"Enter side b";
    cin>>b;
    cout<<"enter side c";
    cin>>c;

    area_of_triangle(a,b,c);
    
    return 0;

}

void area_of_triangle(float x,float y,float z)
{
    float area, s;
    s=(x+y+z)/2;
    area=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"area of triangle = "<<area;
}
