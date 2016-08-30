#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,sub,x;
	//cin>>t;
	t=1;
	
	while(t--)
	{
		cin>>a>>b;
		sub=a-b;
		x=sub%10;
		if(x==9)
		{
			sub= sub-1;
			cout<<sub<<"\n";
		}
		else{	//make last digit 0
			sub= sub+1;
			cout<<sub<<"\n";
		}
	}
	return 0;
}
