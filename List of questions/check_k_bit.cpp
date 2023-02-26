#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int k;
    cout<<"Enter the k bit ";
    cin>>k;
    if(n&(1<<(k-1)!=0))
    {
        cout<<"Yes It is set";
    }
    else
    cout<<"No it is not set";
}
