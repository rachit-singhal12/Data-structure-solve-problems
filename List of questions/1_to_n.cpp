#include<iostream>
using namespace std;

void basic(int n)
{
    if(n==0)
    return;
    else{
        basic(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    basic(n);
}