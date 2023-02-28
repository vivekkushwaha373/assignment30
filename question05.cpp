#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter your mobile number";
    cin.getline(str,20);
    try
    {int i=0;
   for(;str[i]!='\0';i++);
      if(i!=10)
      throw "Invalid mobile number ";
    }
    catch(const char *ptr)
    {
     cout<<ptr;
    }

    return 0;
}