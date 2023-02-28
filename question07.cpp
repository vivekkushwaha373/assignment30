#include<iostream>
using namespace std;
int main()
{
    char str[20];
    
    cout<<"Enter username: ";
    cin.getline(str,20);
    int count=0;
    int sc=0;
    //32–47 / 58–64 / 91–96 / 123–126
    try
    {int i=0;
   for(i=0;str[i]!='\0';i++)
   {
     if(str[i]>47 && str[i]<58)
     {
        count++;
        
     }
     if((str[i]>=32 && str[i]<=47) ||(str[i]>=58 && str[i]<=64 )||(str[i]>=91 && str[i]<=96 )||(str[i]>=123 && str[i]<=126))
     {sc++;}
     
   }
//    cout<<i<<" "<<count<<" "<<sc<<endl;
      if(i!=6 || count==0 || sc==0)
      throw "Invalid username";
    }
    catch(const char *ptr)
    {
     cout<<ptr;
    }

    return 0;
}