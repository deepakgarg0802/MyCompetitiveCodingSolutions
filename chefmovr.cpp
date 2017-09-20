#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
struct comp{
    int sal,offer;
};
 
int main()
{
    ll int t,n,i,j,k,d,x,y,z,mean,flag,ans;
    vector<int> a;
        
    ll total;
    
    cin>>t;
    
    while(t--){
        cin>>n>>d;
        total=ans=mean=0;
        a.clear();
        
        for(i=0;i<n;++i){
            cin>>k;
            a.push_back(k);
            total+=k;
        }
        ll mean= total/n;
        if(n*mean != total){
            cout<<"-1\n";
            continue;
        }
        flag=1;
        i=j=0;
        
        for(int z=0;z<d && flag==1;z++){
            j=i=z;
 
            while(i<n && j<n)
            {
                if(a[i]<mean)
                {
                    //DEBUG(i);
                    while(j<n && a[j]<=mean)
                    {
                        j+=d;
                    }
                    //DEBUG(j);
                    if(j<n && a[j]>mean){
                        k=min(mean-a[i],a[j]-mean);
                        a[i]+=k;
                        a[j]-=k;
                        ans+= k*((abs(j-i)/d));
                    }
                
                    else{
                        flag=0;
                        break;
                    }
                    if(a[i]==mean){
                        i+=d;
                    }
                }
                else{
                    i+=d;
                }
            }            
            
        }
        if(flag){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}
