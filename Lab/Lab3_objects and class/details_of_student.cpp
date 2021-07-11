//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display()

#include <iostream>
using namespace std;

class student
{
    public:
             char name[50] , address[20];
             int roll;
            double percentage;

            void input()
            {
            cout<<"Enter Name =  ";
            cin>>name;
            cout<<"Roll number = ";
            cin>>roll;
            cout<<"Address = ";
            cin>>address;
            cout<<"Percentage = ";
            cin>>percentage;
            }

            void display()
            {
                if (percentage>45)
                {
                    cout<<"Congratulation here are your details : "<<endl;
                    cout<<"Name : "<<name<<endl;
                    cout<<"Address :"<<address<<endl;
                    cout<<"percentage : "<<percentage<<endl;

                }
                else
                {
                    cout<<"Sorry Your Score is below 45"<<endl;
                }
            }
};

int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
};