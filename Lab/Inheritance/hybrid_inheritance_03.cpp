#include <iostream>
using namespace std;

class person
{
    protected:
    string name;
    int code;
    public:
    void get_person()
    {
        cout<<"Enter name of person:";
        cin>>name;
        cout<<"Enter code of person:";
        cin>>code;
    }
};
class account:virtual public person
{
    protected:
    double pay;
    public:
    void get_account()
    {
        cout<<"Enter the amount to be paid:";
        cin>>pay;
    }
};
class admin:virtual public person 
{
    protected:
    float experience;
    public:
    void get_admin()
    {
        cout<<"Your experience of working:";
        cin>>experience;
    }
};
class master:public account,public admin
{
    public:
    void display()
    {
        cout<<"The details of a person are :"<<endl;
        cout<<"The name of a person is : "<<name<<endl;
        cout<<"The code of person is : "<<code<<endl;
        cout<<"The amount to be paid to the person is :"<<pay<<endl;
        cout<<"The experience of work is :"<<experience<<"yrs"<<endl;
    }
void update()
    {
      cout<<"Enter name of person:";
      cin>>name;
      cout<<"Enter code of person:";
      cin>>code;
      cout<<"Your experience of working:";
      cin>>experience;
      cout<<"Enter the amount to be paid:";
      cin>>pay;
    }
};
int main()
{
    char ch;
    master m;
    m.get_person();
    m.get_account();
    m.get_admin();
    m.display();
    cout<<"Do you want details of next person?";
    cin>>ch;
    if (ch=='Y' || ch=='y')
    {
        m.update();
        m.display();
    }
    else
    {
        cout<<"Only one details is enough :";
    }
}