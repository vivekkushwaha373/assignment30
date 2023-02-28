#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter area pin code : ";
    cin.getline(str,20);
    try
    {int i=0;
   for(;str[i]!='\0';i++);
      if(i!=6)
      throw "Invalid area pin code";
    }
    catch(const char *ptr)
    {
     cout<<ptr;
    }

    return 0;
}