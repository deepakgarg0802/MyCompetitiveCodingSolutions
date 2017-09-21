#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,i,q,j,c,k,prev,next,l,r,x;
    long long ans;
    vector<int> a;
    int ch;
    
    //cin>>t;
    t=1;
    
    while(t--){
        cin>>n>>q;
        a.clear();
        
        
        for(i=0;i<n;++i){
            cin>>prev;
            a.push_back(prev);
        }
        while(q--){
            cin>>ch;
            if(ch==1){
                cin>>c>>k;
                ans=c-1;
                prev=a[ans];
                for(i=c;i<n && k>0;++i){
                    if(i-ans>100){
                        break;
                    }
                    else if(a[i]>prev){
                        k--;
                        ans=i;
                        prev=a[i];
                        //cout<<i<<" "<<k;
                    }
                }
                cout<<ans+1<<endl;
            }
            else{
                cin>>l>>r>>x;
                for(i=l-1;i<=r-1;++i){
                    a[i]+=x;
                }
                /*for(i=0;i<n;++i){
                    cout<<a[i]<<" ";
                }
                cout<<endl;*/
            }
        }
        //cout<<"end";
    }
    return 0;
}  
