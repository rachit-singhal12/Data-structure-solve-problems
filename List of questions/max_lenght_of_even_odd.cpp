#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n],flag=1,temp=0;
    cout<<"Enter the element of an array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2==0&&arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0))
        {
            flag++;
        }
        if(flag>temp)
        {
            temp=flag;
        }
    }
    cout<<temp;
    return 0;
}