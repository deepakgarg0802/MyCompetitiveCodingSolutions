#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,i,j,x,y,b,l1,l2;
    int a[1000005],str[100005];
    int k,flag;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        k=0;
        
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        for(i=0;i<n;++i){
            for(j=i+1;j<n;++j){
                if((a[i]|a[j]) <= max(a[i],a[j]))
                    ++k;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}  
