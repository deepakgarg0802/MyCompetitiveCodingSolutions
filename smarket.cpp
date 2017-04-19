#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,q,i,j,l,r,k,x,y,temp,count,ans;
    int a[MAX]={0};
    int dp[MAX]={0};
    
    cin>>t;
    
    while(t--){
        cin>>n>>q;
        cin>>a[0];
        
        //dp[0]=count=1;
        
        for(i=1;i<n;++i){
            cin>>a[i];
            /*if(a[i-1]==a[i]){
                ++count;
            }
            else{
                count=1;
            }
            dp[i]=count;*/
        }
        
        while(q--){
            cin>>l>>r>>k;
            l--;
            r--;
            ans=0;
            count=1;
            
            for(i=l+1;i<=r;++i){
                if(a[i]==a[i-1]){
                    ++count;
                }   
                else{
                    if(count>=k){
                        ++ans;
                    }
                    count=1;
                }
            }
            if(count>=k)
            {
                ++ans;
            }
            cout<<ans<<"\n";
        }
        //cout<<endl;
    }
    
    return 0;
}    
