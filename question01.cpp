#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    char b[10];
    cout<<"Enter the integer: ";
    cin>>a;
    cout<<"Enter the string: ";
    cin>>b;
    string ptr="I am a boy";
    try
    {
     if(a==0)
      throw ptr;
    
     if(strcmp(b,"hello")==0)
      throw "Invalid string Entry"; 
     else
     throw exception();
    }
    catch(string a)
    {
      cout<<a;
    }
    catch(int *b)
    {
     cout<<b;
    }
    catch(...)
    {
     cout<<"unknown error, wait for a while";
    }
    return 0;
}