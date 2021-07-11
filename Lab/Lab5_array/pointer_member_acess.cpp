#include <iostream>
using namespace std;
class box{
    private:
    double length , breadth ,height;

    public:
    box(double len, double bdth, double hgt)
    {
        cout<<"Constructor is called"<<endl;
        length=len;
        breadth=bdth;
        height=hgt;
    }
    double volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    box box1(10.5,5.5,4.5) , box2(2.5,3.5,4.5);
    box *ptrbox;
    cout<<"Address of box 1 variable = "<<&box1<<endl;
    /*point yesto khalko variable ho jusle aru variableko address lai afule carry 
    garna sakxa.
    In this case box1 variable ko address lai ptrbox variable le carry garna sakxa*/

    ptrbox=&box1;

    /* access the member function using member access operation (->)*/

    cout<<"Volume of box1 = "<< ptrbox->volume()<<endl;
    //save the address of second aobj
    ptrbox=&box2;
    cout<<"volume of box2 = "<<ptrbox->volume()<<endl;
}
