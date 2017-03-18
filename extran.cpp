#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    long long t,n,a[MAX],i,j,ans;
    //t=1;
    cin>>t;
    
    while(t--){
        cin>>n;
        
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n-1;++i){
            if(a[i+1]-a[i-1]==1 && a[i]-a[i-1]==1)
            {
                ans=i;
                break;
            }  
            else if(a[i]-a[i-1]==1 && a[i+1]-a[i]!=1)
            {
                ans=i+1;
                //DEBUG(i);DEBUG(ans);
                break;
            } 
            else if(a[i+1]-a[i]==1 && a[i]-a[i-1]!=1)
            {
                ans=i-1;
                break;
            } 
        }
        cout<<a[ans]<<endl;
    }
    
    return 0;
}
