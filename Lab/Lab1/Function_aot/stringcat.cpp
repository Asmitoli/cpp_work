#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    
    char string1[20],string2[40],string3[20];

    cout<<"enter a string"<<endl;
     gets(string1);

     cout<<"enter second string"<<endl;
     gets(string2);
     
      
     cout<<"string entered is \t"<<strcat(string1,string2);

}