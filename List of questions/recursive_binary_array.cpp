#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int k)
{
    int mid = (low+high)/2;
    if(arr[mid]==k)
    return mid;
    else if(arr[mid]>k)
    return binary_search(arr,low,mid-1,k);
    else
    return binary_search(arr,mid+1,high,k);
}
int main()
{
    int n,k,temp=-1;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binary_search(arr,0,n-1,k);
    return 0;
}