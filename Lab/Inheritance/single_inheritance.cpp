#include <iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
        cout<<"Eating : "<<endl;
    }

};
class dog:public animal
{
    public:
    void bark()
    {
        cout<<"Barking...."<<endl;
    }
};
int main()
{
    dog d;
    d.eat();
    d.bark();
    return 0;
}