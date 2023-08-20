#include<iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            temp++;
        }
        if((temp&1)==1)
        {
            if(flag<temp)
            flag=arr[i];
        }
    }
    cout<<flag;
    return 0;
}