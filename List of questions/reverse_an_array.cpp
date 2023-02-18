#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {8,3,7,10,4,2,5};
    int high = 6,low = 0,temp;
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