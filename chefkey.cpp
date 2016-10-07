#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,c,i,j,x,y,count=0;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>m>>c;
		count=0;
		
		for(i=1;i<=n;++i)
		{
			if(c%i==0 && c/i <=m)
			{
				++count;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
