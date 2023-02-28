#include<iostream>
using namespace std;
int main()
{
   int a;cin>>a;
   try
   {
    if(a==0)
    throw "Invalid entry";
    else
    throw &a;
   }
   catch(const char *ptr)
   {
    cout<<ptr<<endl;
   }
   catch(const int *a)
   {
    cout<<"You have entered "<<*a;
   }

    return 0;
}