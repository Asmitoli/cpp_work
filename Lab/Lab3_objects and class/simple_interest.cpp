//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided

  
#include<iostream>
using namespace std;
class Interest
{
    private:
      float SI;

    public:
        
         void calulation(double per , double tim ,float rate=0.15)
        {
             
            
            SI=(per*tim*rate)/100;
        }   

        void display()
          {
              cout<<"Simple interest is : \t"<<SI;
          }                  
      
};

int main()
{
    Interest I1;
      float percentage,rate1,time;
      char ch;
        cout<<"Enter percentage : ";
        cin>>percentage;
        cout<<"Enter time : ";
        cin>>time;
        cout<<"Do you want to enter rate Y/N : "<<endl;
        cin>>ch;
        
                if(ch=='Y'|| ch=='y')
                {
                    cout<<"enter rate : ";
                    cin>>rate1;
                    I1.calulation(percentage,time,rate1);
                }


                else
                    I1.calulation(percentage,time);


       I1.display();

}

