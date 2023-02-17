#include<iostream>
using namespace std;
int main()
{
    int n,key,temp=0;
    cout<<"enter an size of an array";
    cin>>n;
    int arr[n];
    cout<<"Enter array element";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the delete key";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            temp=1;
            break;
        }
    }
    if(temp==1){
    for(int i=key-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    } 
    cout<<"array after deleting an element\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }
    else{
        cout<<"Element was not present in an array";
    }
    return 0;
}