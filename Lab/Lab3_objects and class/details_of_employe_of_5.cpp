//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]

#include <iostream>
using namespace std;

class employee
{
    public:
            char name[20];
            int id;
            double salary;

            void input()
            {
                cout<<"Enter Name : "<<endl;
                cin>>name;
                cout<<"ID : "<<endl;
                cin>>id;
                cout<<"Salary : "<<endl;
                cin>>salary;

            }

            void display()
            {
                cout<<name<<"\t"<<id<<"\t"<<salary;

            }
};

int main()
{
    int i,j;
    employee e[5];
    for(i=0; i<5; i++)
    {
        e[i].input();

    }
    cout<<"Name \t"<<" Id \t"<<"salary \t"<<endl;
      for(j=0; j<5; j++)
    {
        e[j].display();
        cout<<endl;
    }
    
  
}
