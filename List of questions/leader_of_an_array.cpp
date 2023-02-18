#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[n] = {1,10,6,3,4,5,2};
    int flag=arr[n-1];
    cout<<flag<<" ";
    for(int i=n-2;i>0;i--)
    {
        if(arr[i]>flag){
            flag=arr[i];
            cout<<flag<<" ";
        }
    }
    return 0;
}