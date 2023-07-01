#include<iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int pos=0,temp=0;
    if(arr[0]>arr[1])
    {
        int t = arr[0];
        arr[0] = arr[1];
        arr[1] = t;
    }
    for(int i=2;i<7;i++)
    {
        int ele = arr[i],j=i-1;
        while(j>=0 && arr[j]>ele)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = ele;
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}