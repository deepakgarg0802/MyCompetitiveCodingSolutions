#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int main()
{
    ll int t,n,i,j,k,d,x,y,z,mean,flag,ans;
    vector<int> a;
            
    cin>>t;
    
    while(t--){
        cin>>n;
        flag=1;
        a.clear();
        
        for(i=0;i<n;++i){
            cin>>k;
            a.push_back(k);
        }
        k=0;
        
        for(i=0,j=n-1;i<=j;++i,--j){
            if(a[i]!=a[j]){
                flag=0;
                break;
            }
            if(k==0 && a[i]==k){
                flag=0;
                break;    
            }
            else if(a[i]==k){
                
            }
            else if(a[i]==k+1){
                k++;    
            }
            else{
                flag=0;
                break;      
            }
        }
        if(flag && k==7){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
} 
