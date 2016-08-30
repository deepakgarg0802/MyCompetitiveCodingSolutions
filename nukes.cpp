#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long a,k,n,i,temp,blown;
	int t;
	t=1;
	
	while(t--)
	{
		cin>>a>>n>>k;
		blown=n+1;// at which explodes

		for(i=0;i<k;++i)
		{

			temp = a%blown;
			cout<<temp<<" ";
			a= a/blown;
		}
		cout<<endl;
	}
	return 0;
}
