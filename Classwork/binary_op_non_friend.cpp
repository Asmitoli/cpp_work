//wap to add two distance object by overloading binary + operator

#include <iostream>
using namespace std;

class distances
{
    
    public:
    int feet ,inch;
    distances()              //intialize garda feet ra inch ko value 0 banako ho
    {
        feet=0;
        inch=0;
    }
    distances(int feet,int inch)
    {
        this->feet=feet;
        this->inch=inch;
    }
   
    distances operator + (distances  d)
    {
        distances temp;
        cout<<"Enter feet and inch: ";
        cin>>this->feet>>this->inch;
        cout<<"Enter feet and inch: ";
        cin>>d.feet>>d.inch;
        temp.feet=this->feet+d.feet;
        temp.inch=this->inch+d.inch;
        return temp;

    }
   void display();
 };
 void distances::display()
 {
        {
        cout<<"Total feet = "<<this->feet<<endl;
        cout<<"Total inch = "<<this->inch<<endl;
    }
 }
int main()
{
    distances d1(10,20),d2(20,30),d3;
  
    d3=d1+d2;
    d3.display();
}