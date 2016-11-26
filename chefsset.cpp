#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
 
int main(){
    int i,j,n,t;
    long long ans;
    set <int> num;
    
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;++i){
            cin>>j;
            num.insert(j);    
        }        
        j=num.size();
        
        if(j>=2)
            cout<<n<<"\n";
        else
            cout<<"0\n";
    }
    return 0;
}  
