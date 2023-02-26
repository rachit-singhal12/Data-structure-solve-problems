#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"enter the number ";
    cin>>n;
    while(n>1)
    {
        if((n%2)==1)
        {
            temp=0;
            break;
        }
        else
            temp++;
        n/=2;
    }
   if(temp>0)
   cout<<"yes";
   else
   cout<<"no";
    return 0;
} 
