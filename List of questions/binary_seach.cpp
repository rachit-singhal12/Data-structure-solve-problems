#include<iostream>
using namespace std;

int main()
{
    int n,k,temp=-1;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int high = n-1,low=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            temp=mid;
            break;
        }
        else if(arr[mid]>k)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<temp;
    return 0;
}