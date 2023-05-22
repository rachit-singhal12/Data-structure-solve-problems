#include<iostream>
using namespace std;

bool binary_search(int arr[],int n,int key)
{
    int low=0;
    int mid = n/2;
    int high = n;
    while(mid>0)
    {
        if(arr[mid]==key)
        {
            return true;
        }
        else if(arr[mid]>key)
        {
            high = mid;
            mid =(low+high)/2;
        }
        else {
            low = mid;
            mid =(low+high)/2;
        }
    }
    return false;
}

int main()
{
    int arr[]= {0,1,2,3,4,5,6,7,8,9,10};
    int size = 11;
    if(binary_search(arr,size,8))
    {
        cout<<"yes found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}