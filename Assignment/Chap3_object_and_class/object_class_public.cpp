//Program to illustrate the application of  public access specifiers

#include <iostream>
using namespace std;


class room
{
    public:
    double length;
    double breadth;
    double height;

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
    room room1;
    room1.length=50.89;
    room1.breadth=90.56; 
    room1.height=70.5;
    
    cout<< "The area of room = "<<room1.calculatearea()<<endl;
    cout<< "The volume of room = "<<room1.calculatevolume()<<endl;
    return 0;

}
