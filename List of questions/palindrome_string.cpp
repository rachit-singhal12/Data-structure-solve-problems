#include<iostream>
using namespace std;

bool check(string str,int s,int e)
{
    if(s==e || s>e)
    return true;
    if(str[s]!=str[e])
    return false;
    return check(str,s++,e--);
}
int main()
{
    string n;
    cin>>n;
    int s=0,e=n.length();
    if(check(n,s,e)!=true)
    {
        cout<<"Yes it is an planidrome number";
    }
    else{
        cout<<"It is not an plaindrome number";
    }
}