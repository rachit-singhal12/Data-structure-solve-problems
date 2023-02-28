#include<iostream>
using namespace std;

int main()
{
    int n,temp=0,max=0;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            temp++;        
        }
        else{
            temp=0;
        }
        if(temp>max)
        max=temp;
    }
    cout<<max;
    return 0;
}