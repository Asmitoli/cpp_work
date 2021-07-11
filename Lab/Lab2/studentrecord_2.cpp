#include <iostream>

using namespace std;



struct student

{

    char name[50];

    int roll;

    char address[20];

} s[3];



int main()

{

    cout << "Enter information of students: " << endl;



    // storing information

    for(int i = 0; i < 3; ++i)

    {

        s[i].roll = i+1;

        cout << "For roll number" << s[i].roll << "," << endl;



        cout << "Enter name: ";

        cin >> s[i].name;



        cout << "Enter Address: ";

        cin >> s[i].address;



        cout << endl;

    }



    cout << "Displaying Information: " << endl;



    // Displaying information

    for(int i = 0; i < 3; ++i)

    {

        cout << "\nRoll number: " << i+1 << endl;

        cout << "Name: " << s[i].name << endl;

        cout << "Marks: " << s[i].address << endl;

    }


 return 0;

}