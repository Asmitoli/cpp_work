#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[20];
    int length;
    cout<<"enter your name"<<endl;
     gets(name);

     length=strlen(name);
     
      
     cout<<"length  of string entered is \t"<<length;
}