#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,2,8,5,6,7};
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    return 0;
}
