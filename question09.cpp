#include<iostream>
using namespace std;
int main()
{
    char str[50];
    char ptr[10]="gmail.com";
    cout<<"ENTER THE EMAIL ADDRESS: ";
    int mail=0;
    cin>>str;
    int count=0;
    
    try
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='@')
            count++;
            
        }
        for(int i=0;str[i]!='\0';i++)
        {
            if(ptr[0]==str[i])
           { for(int j=0;ptr[j]!='\0';j++)
            {
               if(ptr[j]==str[i+j])
               mail++;
            }
           }
           if(mail==9)
           break;
           else
           mail=0;
        }
        
        if(count==0 || mail==0)
        throw "Invalid email address ";
    }
    catch(const char *ptr)
    {
      cout<<ptr;
    }

    return 0;
}