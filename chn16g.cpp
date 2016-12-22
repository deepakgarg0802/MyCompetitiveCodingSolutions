#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,x;
    long long p,num;
    int v[MAX]={0};
    
    cin>>t;
    
    while(t--){
        cin>>n;
        num=0;
        for(i=0;i<n;++i){
            cin>>v[i];
            //DEBUG(coal[i]);
        }
        for(i=0;i<n;++i){
            if(v[i])
                for(j=i+1;j<n;++j)
                {
                    if(v[i]==v[j]){
                        v[j]=0;
                        num++;
                    }    
                }
            else 
                continue;
            
        }
        cout<<num<<endl;
    }
    return 0;
}   
