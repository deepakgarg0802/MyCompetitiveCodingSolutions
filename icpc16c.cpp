#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,n,ans;
	cin>>t;
 
	while(t--)
	{
		cin>>n;
		cout<<(n%9)+1<<endl;
	}
	return 0;
}
