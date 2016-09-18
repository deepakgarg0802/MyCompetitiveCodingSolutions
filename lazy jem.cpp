#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,b,m,i,j,ans,temp;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>b>>m;
		ans=0;
		while(n)
		{
			if(n%2==0)
			{
				
				ans+= (n/2)*m;
				n=n/2;
			}
			else
			{
				ans+= ((n+1)/2)*m;
				n= n-((n+1)/2);
			}
			//cout<<ans<<" ";
			if(n==0){
				break;
			}
			else
			{
				ans+=b;
			}
			//cout<<ans<<" ";
			m=2*m;
			//cout<<"m:"<<m;
		}
		cout<<ans<<endl;
	}
	return 0;
}
