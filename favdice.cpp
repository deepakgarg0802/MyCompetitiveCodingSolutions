#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
    int t;
    double n,temp;
    cin>>t;
    
    while(t--){
        cin>>n;
        temp=0;
        
        for(int i=1;i<=n;++i)
            {
            temp+= n/i;
        }
        printf("%.2f\n",temp);
        //cout<<temp<<endl;
    }
	return 0;
}
