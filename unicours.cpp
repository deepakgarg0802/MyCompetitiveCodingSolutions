#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,k,ans,i,j;
    int a[MAX];
    
    cin>>t;
    
    while(t--){
        cin>>n;
        
        for(i=0;i< n; ++i){
            cin>>a[i];
        }
        ans=a[0];
        for(i=1;i< n; ++i){
            if(a[i]>ans)
                ans=a[i];
        }
        
        cout<<n-ans<<endl;
    }
    return 0;
}    
