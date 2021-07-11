#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float area_of_triangle();
int main()
{
    float area;
	area = area_of_triangle();
	cout<<"Area of triangle"<<area;
	

}

float area_of_triangle()
{
   float area,s,a,b,c;
    cout<<"Enter sides of Triangle";
    cout<<"Enter side a";
    cin>>a;
    cout<<"Enter side b";
    cin>>b;
    cout<<"enter side c";
    cin>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
	}