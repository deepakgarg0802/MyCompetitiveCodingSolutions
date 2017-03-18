#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,a,i,j,ans,zero;
    cin>>t;
    
    while(t--){
        cin>>n;
        ans=zero=0;
        
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                cin>>a;
                
                if(a==0)
                    ++zero;
            }
        }
        for(i=1;i<=n;++i){
            if(zero>= (2*i)){
                zero= zero -(2*i);
            }
            else
                break;
        }
        cout<<n-i<<endl;
    }
    
    return 0;
}
