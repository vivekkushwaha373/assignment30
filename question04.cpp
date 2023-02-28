#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"ENTER THE EMAIL ADDRESS: ";
    cin>>str;
    int count=0;
    try
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='@')
            count++;
        }
        if(count==0)
        throw "Invalid email address ";
    }
    catch(const char *ptr)
    {
      cout<<ptr;
    }

    return 0;
}