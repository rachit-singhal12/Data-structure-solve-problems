#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        if((n&1)==1)
        {
            temp++;
        }
        n>>=1;
    }
    cout<<temp;
    return 0;
} 
