#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,x;
    long long p,num;
    int coal[MAX]={0},tax[MAX]={0},pol[MAX]={0};
    
    cin>>t;
    
    while(t--){
        cin>>n;
        for(i=0;i<n;++i){
            cin>>coal[i];
            //DEBUG(coal[i]);
        }
        for(i=0;i<n-1;++i){
            cin>>tax[i];
            //DEBUG(tax[i]);
        }
        for(i=0;i<n-1;++i){
            cin>>pol[i];
            //DEBUG(pol[i]);
        }
        long long int profit=coal[0];
        long long int prev=profit;
        
        for(i=1;i<n;++i){
            prev+= coal[i]-(pol[i-1]*tax[i-1]);    
            if(profit<prev){
                profit=prev;
            }
        }
        cout<<profit<<endl;
    }
    return 0;
}  
