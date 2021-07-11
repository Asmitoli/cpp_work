#include<iostream>
using namespace std;
void functionfirst (int a)
{
    cout <<"value of abefore altering is:" << a<<endl;
    a=5;
    cout <<"value of a after altering is:" << a<<endl;;

}
int main()
{
    int a = 1;
    functionfirst(a);
    cout << "value of a in main:" << a<<endl;

}