#include<iostream>
using namespace std;
int mini(int arr[],int low,int high)
{
    int temp=arr[low],index=low;
    for(int i=low+1;i<=high;i++)
    {
        if(temp>arr[i])
        {
            temp = arr[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {3,6,2,1,0,7,4};
    int size = 7;
    for(int i=0;i<7;i++)
    {
        int index = mini(arr,i,size-1);
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    return 0;
}