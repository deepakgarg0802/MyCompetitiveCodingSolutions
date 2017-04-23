#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    long long int t,n,k,ans,i,j,a,b;
    char str[MAX];
    long long left[MAX],right[MAX];
    
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        cin>>str;
        a=b=ans=0;
        
        for(i=n-1;i>=0;--i){
            if(str[i]=='b'){
                b++;
            }
            if(str[i]=='a'){
                right[i]=b;
            }
        }
        b=0;
        
        for(i=0;i<n;++i){
            if(str[i]=='b'){
                b++;
            }
            if(str[i]=='a'){
                left[i]=b;
            }
        }
        
        for(i=0;i<n;++i){
            //DEBUG(left[i]);
            //DEBUG(right[i]);
            
            if(str[i]=='a'){
                ans+= k*right[i]+ k*(k-1)*(left[i]+right[i])/2;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
