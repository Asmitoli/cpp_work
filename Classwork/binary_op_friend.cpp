#include <iostream>
using namespace std;

class distances
{
    
    public:
    int feet ,inch;
    distances()
    {
        feet=0;
        inch=0;
    }
    distances(int feet,int inch)
    {
        this->feet=feet;
        this->inch=inch;
    }
    void display(); 
 
friend distances operator + (distances x,distances y);
};
distances operator + (distances x,distances y)     //class bahira function cr8 gareko bhara x and y argument lekheko ho.
{
          distances temp;
        cout<<"Enter feet and inch: ";
        cin>>x.feet>>x.inch;
        cout<<"Enter feet and inch: ";
        cin>>y.feet>>y.inch;
        temp.feet=x.feet+y.feet;
        temp.inch=y.inch+y.inch;
        return temp;

    
}
void distances::display()
       {
        cout<<"Total feet = "<<this->feet<<endl;
        cout<<"Total inch = "<<this->inch<<endl;
        }

int main()
{
     distances d1(10,20),d2(20,30),d3;
  
    d3=d1+d2;
    d3.display();
}

