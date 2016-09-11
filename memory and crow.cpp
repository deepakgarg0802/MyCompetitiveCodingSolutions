#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int main() {
	// your code goes here
	int a[MAX],i,j,n;
    cin>>n;
    
    cin>>a[0];
    for(int i=1;i<n;++i){
        cin>>a[i];
        cout<<a[i-1]+a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
	return 0;
}
