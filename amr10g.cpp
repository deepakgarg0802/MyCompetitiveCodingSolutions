#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,h[20005],min,max,temp;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>k;
		int ans=INT_MAX;
		
		for(int i=0;i<n;++i)
		{
			cin>>h[i];
		}
		sort(h,h+n);
		
		for(int i=0;i<=n-k;++i)
		{
			min=h[i];
			//cout<<"min"<<min;
			max=h[i+k-1];
			//cout<<"max"<<max;
			temp= max-min;
			//cout<<temp<<" ";
			if(temp<ans)
			{
				ans=temp;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
