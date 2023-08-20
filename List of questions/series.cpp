#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"("<<1;
        for(int j=2;j<=i;j++)
        {
            cout<<"*"<<j;
        }
        if(i==n)cout<<")";
        else
        cout<<")"<<"+";
    }
    return 0;
}