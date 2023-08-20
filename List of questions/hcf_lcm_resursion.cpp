#include<iostream>
#include<algorithm>
using namespace std;

int LCM(int a,int b,int higher)
{
    if(higher%a==0 && higher%b==0)
    return higher;
    else return LCM(a,b,higher+1);
}

int HCF(int a,int b,int lower)
{
    if(a%lower==0 && b%lower==0)
    return lower;
    else return HCF(a,b,lower-1);
}

int main()
{
    int a,b,lower,higher;
    cin>>a>>b;
    lower = min(a,b);
    higher = max(a,b);
    cout<<LCM(a,b,higher)<<endl;
    cout<<HCF(a,b,lower-1);
    return 0;
}