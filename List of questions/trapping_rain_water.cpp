#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,maxright,maxleft,temp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=1;i<n-1;i++)
    {
        maxleft = arr[i];
        maxright = arr[i];
        for(int j=i;j<n;j++)
        {
            if(maxright<arr[j])
            {
                maxright = arr[j];
            }
        }
        for(int k=i;k>=0;k--)
        {
            if(maxleft<arr[k])
            {
                maxleft = arr[k];
            }
        }
        temp+=min(maxleft,maxright)-arr[i];
    }
    cout<<temp;
    return 0;
}