#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,i,j,ans=0;
    cin>>t;
    
    while(t--){
        ans=0;
        cin>>n>>a>>b;
        if(a>b){
            int temp=b;
            b=a;
            a=temp;
        }
        for(i=2;i<n;++i){
            cin>>j;
            a=min(j,a);
            b=max(j,b);
        }
        cout<<b-a<<endl;
    }
    return 0;
}
