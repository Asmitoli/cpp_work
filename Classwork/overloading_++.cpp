#include <iostream>
using namespace std;

class count
{
    private:
    int value;
    public:
 void input()
 {
     cout<<"Enter the value = ";
     cin>>value;
 }
count operator ++()
{
    count temp;
    temp.value=++value;
    return temp;
}
void display()
{
    cout<<"The count = "<<value;
}
};
int main()
{
    count c1,c2;
c1.input();
c2=++c1;
c2.display();

}