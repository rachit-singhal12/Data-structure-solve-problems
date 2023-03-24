#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n=5;
    int arr[5] = {1,5,2,3,0};
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}