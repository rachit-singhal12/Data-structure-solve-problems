#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {12,5,12,4,3,2,1};
    int larg = arr[0],result=-1;
    for(int i=1;i<7;i++)
    {
        if(arr[i]>larg){
            result = larg;
            larg = arr[i];
        }
        else if(arr[i]<larg)
        {
            if(arr[i]>result)
            result=arr[i];
        }
    }
    cout<<"The second largest element in an array was "<<result;
    return 0;
}