#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int main(){
    int t,m,n,i,j,count,temp;
    
    
    cin>>t;
    //t=1;
 
    while(t--)
    {
        cin>>n>>m;
        //DEBUG(s);
        count=0;
        bool a[1000000]={0};
        
        for(i=0;i<n;++i){
            scanf("%d",&temp);
            a[temp-1]=1;
        }
        
        for(i=0;i<m;++i){
            scanf("%d",&temp);
            if(a[temp-1]==1)
                ++count;
        }
        
        cout<<count<<endl;
    }
    return 0;
}   
