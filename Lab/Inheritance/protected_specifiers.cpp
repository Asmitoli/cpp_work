#include <iostream>
using namespace std;

class parent
{
    protected:
    int id_protected;
};
class child:public parent
{
    public:
    void setid(int id)
{
    id_protected=id;
}
void display()
{
    cout<<"Id protected is :"<<id_protected<<endl;
}
};
int main()
{
    child obj1;
    obj1.setid(81);
    obj1.display();
    return 0;
}