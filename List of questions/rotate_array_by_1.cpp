#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1] = temp;
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}