#include<iostream>
using namespace std;

bool binary_search(int arr[],int low,int high,int key)
{
    if(high>=low){
    if(arr[(low+high)/2]==key)
    return true;
    else if(arr[(low+high)/2]>key)
    return binary_search(arr,low,((low+high)/2)-1,key);
    else
    return binary_search(arr,((low+high)/2)+1,high,key);
    }
    return false;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = 11;
    if(binary_search(arr,0,11,8))
    {
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}