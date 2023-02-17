#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {34,45,23,67,12};
    int flag=0;
    for(int i=1;i<5;i++)
    {
        if(arr[flag] < arr[i])
        {
            flag=i;
        }
    }
    cout<<flag+1;
    return 0;
}