#include <iostream>
using namespace std;

class car
{
    public:
 car()                                                                   
    {
        cout<<"Constructor of car"<<endl;
    }
    ~car()

    {
        cout<<"Destuctor of car"<<endl;
    }
};    
class bugatti:public car                          //Inhereting class car
{
    public:
    bugatti()
    {
        cout<<"Constructor of bugatti"<<endl;
    }
    ~bugatti()

    {
        cout<<"Destuctor of bugatti"<<endl;
    }
};   
class lamborghini:public car                       //Inhereting class car
{
    public:
    lamborghini()
    {
        cout<<"Constructor of lamborghini"<<endl;
    }
    ~lamborghini()

    {
        cout<<"Destuctor of lamborghini"<<endl;
    }
};   
class RollsRoyce:public car                         //Inhereting class car
{
    public:
    RollsRoyce()
    {
        cout<<"Constructor of RollsRoyce"<<endl;
    }
    ~RollsRoyce()

    {
        cout<<"Destuctor of RollsRoyce"<<endl;
    }
};   
int main()
{
    bugatti b;
    lamborghini lg;
    RollsRoyce RR;
}                                                                                                     