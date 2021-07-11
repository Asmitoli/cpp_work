//Program to illustrate the application of private access specifiers

#include <iostream>
using namespace std;

class room
{
    private:
    double length;
    double breadth;
    double height;

    public:
    void setarea(double lgth, double bdth, double hgt)
    {
        length=lgth;
        breadth=bdth;
        height=hgt;

        }
        double calculatearea()
        {
            return length*breadth;
        }
        double calculatevolume()
        {
            return length*breadth*height;
        }
};

int main()
{
    room room2;
    
    room2.setarea(50.96 , 20.65 , 45.23);
    cout<<" The area of room = "<<room2.calculatearea()<<endl;
    cout<<"The volume of room = "<<room2.calculatevolume()<<endl;
    return 0;

};
