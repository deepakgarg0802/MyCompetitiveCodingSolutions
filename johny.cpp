#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,a[105],i,j,temp;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cin>>k;
		k--;
		temp=0;
		int pivot= a[k];
		for(i=0;i<n;++i)
		{
			if(a[i]<pivot)
			{
				++temp;
			}
			else if(i<k && a[i]==pivot)
			{
				++temp;
			}
		}
		++temp;
		cout<<temp<<"\n";
	}
	return 0;
}
