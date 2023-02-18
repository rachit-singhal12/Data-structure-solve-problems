#include<iostream>
using namespace std;
int rev (int arr[],int low,int high)
{
    while(high>low)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        high--;
        low++;
    }
}
int main()
{
    int n,d;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the number of repitition ";
    cin>>d;
    int tn = d%n;
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    cout<<"\n";
    rev(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}