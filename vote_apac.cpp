#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	double n,m,ans;
	cin>>t;
	
	for(int i=1;i<=t;++i)
	{
		cin>>n>>m;
		
		ans= (n-m)/(n+m);
		//cout<<"Case #"<<i<<": "<<ans<<"\n";
		printf("Case #%d: %.7f\n",i,ans);
	}
	return 0;
}
