#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a[100000],i,j;
	cin>>t;

	while(t--)
	{
		cin>>n;
		
		for(i=0;i<n;++i)
		{
			cin>>a[i];
			//cout<<a[i]<<" ";
		}
		sort(a,a+i);
		for(i=0;i+1<n;++i)
		{
			a[i]= a[i+1]-a[i];
			//cout<<a[i]<<" ";
		}
		int min=a[0];
		for(i=1;i+1<n;++i)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		cout<<min<<"\n";
	}
	return 0;
}
