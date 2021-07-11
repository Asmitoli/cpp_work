#include <iostream>
using namespace std;

class water
{
    public:
    water()
    {
        cout<<"Constructor of water is called."<<endl;  
    }
    ~water()
    {
        cout<<"Destructor of water is called."<<endl;
    }
};
class fruits
{
    public:
    fruits()
    {
        cout<<"Constructor of fruits is called."<<endl;
    }
    ~fruits()
    {
        cout<<"Destructor of fruits is called."<<endl;
    }
};
class person:public water,public fruits
{
    public:
         person()
        {
            cout<<"Constructor of person is called. "<<endl;
        }

        ~person()
        {
            cout<<"Destructor of person is called. "<<endl;
        }
};
int main()
{
    person pn;
}

