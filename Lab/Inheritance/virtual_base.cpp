#include <iostream>
using namespace std;

class A
{
    private:
    int x;
    public:
   void displaya()
    {
        x=10;
        cout<<"The output of Class A : "<<x<<endl;
    }
};
class B:public virtual A
{
    private:
    int y;
    public:
    void displayb()
    {
        y=20;
        cout<<"The output of Class B : "<<y<<endl;
    }

};
class C:public virtual A
{
    private:
    int z;
    public:
    void displayc()
    {
        z=30;
        cout<<"The output of Class C : "<<z<<endl;
    }
    
};
class D:public B,public C
{
    private:
    int aa;
    public:
 void displayd()
    {
        aa=40;
        cout<<"The output of Class D : "<<aa<<endl;
     }
};
int main()
{
    D d;
    d.displaya();
    d.displayb();
    d.displayc();
    d.displayd();


}