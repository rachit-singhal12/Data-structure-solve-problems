#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {21,2,4,1,6,5};
    sort(arr,arr+6,[](int a,int b){
        return abs(a)>abs(b);
    });
    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}