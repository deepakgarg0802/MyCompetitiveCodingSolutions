#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,x;
    long long p,num;
    int a[MAX]={0};
    double temp;
    map <int,int, std::greater<int> > dp;
    map <int, int> :: iterator itr;
    int high,low,values;
    
    cin>>t;
    
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        
        for(i=0;i<n;++i){
            for(j=i;j<n && a[j]<=a[i];++j);
            high=j;
            for(j=i; j>=0 && a[j]<=a[i]; --j);
            low=j;
            
            values= (high-i)*(i-low);
            if(dp.find(a[i]) == dp.end())
                dp.insert(pair <int, int> (a[i], values));
            else
                dp[a[i]]+=values;
        }
        
        for(int z=0;z<m;++z){
            cin>>p;
            long long int ans=0;
            for (itr = dp.begin(); itr != dp.end(); ++itr)
            {
                ans+= itr->second;
                if(p<=ans){
                    cout<<itr->first<<"\n";
                    break;
                }
            }
        }
        
        dp.clear();
    }
    return 0;
}  
