#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char>sa;
    for(int i=0;i<s.length();i++)
    {
        sa.insert(s[i]); 
    }
    if(sa.size()%26==0)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}