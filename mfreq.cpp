#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int main()
{
    unsigned int num[MAX];
    int k,l,r,ans,x,temp,m,n,i,j;
    
    cin>>n>>m;
    for(i=0;i<n;++i){
        cin>>num[i];
    }
    
    for(int z=0;z<m;++z){
        cin>>l>>r>>k;
        l--;
        r--;
        temp=1;
        for(i=l;i<r && temp<k;++i){
            x=num[i];
            if(num[i+1]!=num[i]){
                temp=1;    
            }
            ++temp;
        }
        //cout<<temp<<" ";
        if(temp>=k){
            cout<<x<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}
