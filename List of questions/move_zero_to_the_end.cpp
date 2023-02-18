#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {0,0,0,10,1,2,0};
    int count = 0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i]=arr[count];
            arr[count] = temp;
            count++;
        }
    }
    for(int i=0;i<7;i++)
    cout<<" "<<arr[i];
    return 0;
}