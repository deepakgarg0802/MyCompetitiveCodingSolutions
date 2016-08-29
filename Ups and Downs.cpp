/*You will be given a zero-indexed array A. You need to rearrange its elements in such a way that the following conditions are satisfied:

A[i] ≤ A[i+1] if i is even.
A[i] ≥ A[i+1] if i is odd.
In other words the following inequality should hold: A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4], and so on. Operations ≤ and ≥ should alter.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a[100000]={0},i,j;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=1;(i+1)<n;i+=2)
		{
			int temp= a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		for(i=0;i<n;++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
