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
        
        for(i=0;i< 2*n; ++i){
            cin>>a[i];
        }
        sort(a,a+ (2*n));
        
        cout<<a[n+(n/2)]<<endl;
        for(i=0;i< n-1; ++i){
            cout<<a[i]<<" "<<a[2*n -i-1]<<" ";
        }
        cout<<a[i]<<" "<<a[2*n -i-1];
        cout<<endl;
    }
    return 0;
}
