#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char a,char b,char c)
{
	if(n==1){
		cout<<"move 1 from "<<a<<" "<<c<<endl;
		return;
	}
	else{
	tower_of_hanoi(n-1,a,c,b);
	cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
	tower_of_hanoi(n-1,c,b,a);
	}
}
int main()
{
	int n;
	char a,b,c;
	cin>>n;
	cin>>a>>b>>c;
	tower_of_hanoi(n,a,b,c);
	return 0;
}