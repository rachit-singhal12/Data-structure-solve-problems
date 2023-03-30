#include<iostream>
using namespace std;
int main()
{
    int n;
    int low=1,high=10,temp=-1;
    cin>>n;
    while(low<high)
    {
        int mid = (low+high)/2;
        int msq = mid*mid;
        if(msq == n)
        {
            temp = mid;
            break;
        }
        else if(msq > n)
        {
            high = mid-1;
        }
        else{
            low= mid+1;
            temp = mid;
        }
    }
    cout<<temp;
}