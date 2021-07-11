// Q. Write a program in C++ to read the record of a student (name, address, roll) and display them using structure

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    char address[20];
    int roll;
};

 int main()
 {
student s;
 cout << "The record of a student" << endl;
 cout << "Name:"; 
 cin >> s.name;
 cout << "address:";
 cin >> s.address;
 cout << "roll";
 cin >> s.roll;

 cout << "\n The record of student =" << endl;
 cout << "Name: " << s.name << endl;
    cout << "address: " << s.address<< endl;
    cout << "roll: " << s.roll<< endl;
    return 0;
}

