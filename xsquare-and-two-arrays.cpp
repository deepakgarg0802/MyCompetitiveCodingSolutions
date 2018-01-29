
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q,i,j,temp,ans;
    long long res;
    
    int a[100001]={0};
    int b[100001]={0};
    cin>>n>>q;
    
    long long int a1[100001]={0};
    long long int b1[100001]={0};
    
    for(i=1;i<=n;++i){
        cin>>a[i];
        //a1[i]=a[i]+a1[i-1];
    }
    for(i=1;i<=n;++i){
        cin>>b[i];
        //b1[i]=b[i]+b1[i-1];
    }
    a1[1]=a[1];
    
    for(i=2;i<=n;++i){
        a1[i]=a[i]+a1[i-2];
    }
    b1[1]=b[1];

    for(i=2;i<=n;++i){
        b1[i]=b[i]+b1[i-2];
    }
    
    /*for(i=0;i<=n;++i){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<=n;++i){
        cout<<b1[i]<<" ";
    }
    cout<<endl;*/
    
    while(q--){
        cin>>temp>>i>>j;
        
        if(temp==1){
            if((j-i) %2==0){
                cout<<a1[j]-a1[i]+a[i]+b1[j-1]-b1[i+1]+b[i+1]<<endl;
            }
            else{
                cout<<a1[j-1]-a1[i]+a[i]+b1[j]-b1[i+1]+b[i+1]<<endl;
            }
        }
        else{
            if((j-i) %2==0){
                cout<<b1[j]-b1[i]+b[i]+a1[j-1]-a1[i+1]+a[i+1]<<endl;
            }
            else{
                cout<<b1[j-1]-b1[i]+b[i]+a1[j]-a1[i+1]+a[i+1]<<endl;
            }
        }
    }
    return 0;
}
