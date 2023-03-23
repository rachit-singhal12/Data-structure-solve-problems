#include<iostream>
using namespace std;

void basic(int n)
{
    if(n==0)
    return;
    else{
        cout<<n<<" ";
        basic(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    basic(n);
}