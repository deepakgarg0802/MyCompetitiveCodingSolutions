#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double t,s,v,ans;
	cin>>t;
	
	while(t--)
	{
		cin>>s>>v;
		
		ans= (2*s)/(3*v);
		printf("%.8f\n",ans);
		//printf("%.6g\n",ans);
	}
	return 0;
}
