#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    long long x,temp;
    cin>>t;
 
    while(t--){
        scanf("%d %lld",&n,&x);
 
        for(int i=1;i<n;++i){
            scanf("%lld",&temp);
            x=x^temp;
        }
        if(x==0){
            printf("-1\n");
        }
        else{
            printf("%lld\n",x);
        }
    }
    return 0;
}
 
