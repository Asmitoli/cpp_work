// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
  
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
       
        cout << " The number is zero.\n\n";
    }
    
    return 0;
}