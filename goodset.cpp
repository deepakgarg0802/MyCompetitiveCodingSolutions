#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,flag,a,b,c,x,y,z,i,j,k;
    char str[MAX];
    
    cin>>t;
    //t=1;
    
    while(t--){
        cin>>n;
        
        for(i=1,j=1;i<=n;++i){
            cout<<j<<" ";
            j+=2;
        }
        cout<<endl;
        
    }
    return 0;
}  
