#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
 
int main(){
    int t,n,a[100002],i,j,temp;
    cin>>t;
 
    while(t--){
        cin>>n;
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        temp=1;
        for(i=0;i<n-1;++i){
            if(a[i+1]-a[i] >1){
                temp=0;
                break;
            }
        }
        if(temp==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
