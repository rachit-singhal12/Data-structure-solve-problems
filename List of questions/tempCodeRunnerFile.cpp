#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {8,0,0,10,1,2,0};
    int high = 7,low = 0,temp;
    while(high>low)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        high--;
        low++;
    }
    for(int i=0;i<7;i++)
    cout<<" "<<arr[i];
    return 0;
}