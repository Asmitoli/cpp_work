#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[20],name2[40];

    cout<<"enter your name"<<endl;
     gets(name);

     strcpy(name2,name);
     
      
     cout<<"string  is \t";
     puts(name2);
}