#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,s,Area;
	cout<<"Enter three sides of triangle : ";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	Area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of triangle is : "<<Area;
	cout<<endl;
	return 0;
}