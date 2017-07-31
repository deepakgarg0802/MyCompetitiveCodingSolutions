#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    //string str;
    //char str[MAX];
    ll int i,j,k,t,n,b;
    
    cin>>t;
 
    while(t--){
        cin>>n>>b;
        
        /*x=1;
        k=0;
        y=0;
        for(i=2;i<=n;++i){
            temp=(n-i)/b;
            y= i+(temp-1)*i;
            //DEBUG(i);DEBUG(y);
            
            if(y>k)
                k=y;
        }
        cout<<k<<endl;*/
        ll int temp= round(n/(2.0*b));
        ll x= (n-b*temp)*temp;
        cout<<x<<endl;
    }
    return 0;
}
