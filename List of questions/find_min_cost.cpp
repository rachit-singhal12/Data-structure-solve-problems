// Online C++ compiler to run C++ program online
#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int arr[]={4,12,13,18,10,12};
    int size = 6;
    int i=0,count=0;
    while(i<size-1)
    {
        if((arr[i+1]-arr[i])>=(arr[i+3]-arr[i]) && i+3<size)
        {
            count+=abs(arr[i+3]-arr[i]);
            i=i+3;
        }
        else
        {
            count+=abs(arr[i+1]-arr[i]);
            i=i+1;
        }
    }
    cout<<count;
    return 0;
}