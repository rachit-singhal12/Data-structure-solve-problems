#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=arr[0];
   int res=arr[0];
   int maxending = arr[0];
    for(int i=1;i<n;i++)
    {
        maxending = max(maxending+arr[i],arr[i]);
        res = max(res,maxending);
    }
    cout<<res;
    return 0;
}