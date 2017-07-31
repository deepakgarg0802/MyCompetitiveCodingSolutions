#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
struct trainer{
    int d,t,s;
    bool operator<(const trainer &a) const
    {
        return s < a.s;
    }
};
 
int main()
{
    //string str;
    //char str[MAX];
    int i,j,k,t,n;
    bool days[MAX];
    long long sum=0;
    priority_queue <trainer> p;
    cin>>t;
 
    while(t--){
        cin>>n>>k;
        sum=0;
        
        p = priority_queue <trainer>();
        memset(days,0,sizeof(bool)*MAX);
        
        for(i=0;i<n;++i){
            trainer x;
            cin>>x.d>>x.t>>x.s;
            p.push(x);
        }
        while(!p.empty()){
            trainer x= p.top();
            p.pop();
            int placed=0;
            
            //DEBUG(x.d);DEBUG(x.t);DEBUG(x.s);
            for(i=x.d;i<=k && x.t>0;++i){
                if(days[i]==0){
                    days[i]=1;
                    x.t--;
                    //cout<<"placed at "<<i;
                }
            }
            //DEBUG(placed);cout<<endl;
            
            sum+= (x.t)*x.s;
            //cout<<" "<<sum<<" ";
        }
        cout<<sum<<endl;
    }
    return 0;
} 
