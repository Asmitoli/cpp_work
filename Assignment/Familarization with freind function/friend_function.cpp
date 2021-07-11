/*WAP to create class Sample with 2 float data members and member functions 
void getData() to input the values and one friend function float mean(Sample)
to claculate and return mean value  */

#include <iostream>
using namespace std;

class sample
{
    friend float mean(sample s);
    private:
    float num1 , num2;

    public:
    void getdata()
    {
        float x , y;
        cout<<"The Input of x and y = "<<endl;
        cin>>x>>y;
        num1=x;
        num2=y;

    }
};
float mean(sample s)
{
    float mean;
    mean=(s.num1+s.num2)/2;
    return mean;
}
int main()
{
    sample s;
    s.getdata();
    cout<<"The mean = "<<mean(s)<<endl;  
}   