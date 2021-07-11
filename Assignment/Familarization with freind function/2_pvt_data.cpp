//WAP to add two private data of two different classes 

#include <iostream>
using namespace std;

class class1
{
    friend class class2;
    private:
    int num1;

    public:
    class1()
    {
        int x;
        cout<<"Enter the value of x = "<<endl;
        cin>>x;
        num1=x;
    }
};
class class2
{
    private:
    int num2;

    public:
    class2()            //constructor called
    {
        int y;
        cout<<"Enter the value of y = "<<endl;
        cin>>y;
        num2=y;
    }

    void sum(class1 obj1)
    {
        int sum;
        sum=num2 + obj1.num1;
        cout<<"The sum = "<<sum<<endl;

    }

    };
    int main()
    {
        class1 obj1;
        class2 obj2;
        obj2.sum(obj1);
        return 0;
    }



