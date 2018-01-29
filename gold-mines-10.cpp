#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,t,n,r,c,q;
    int x1,y1,x2,y2;
    long long gold,temp;
    int g[1001][1001]={0};
    long long dp[1001][1001]={0};
    
    cin>>r>>c;
    
    for(i=1;i<=r;++i){
        temp=0;
        for(j=1;j<=c;++j){
            cin>>g[i][j];
            temp+=g[i][j];
            dp[i][j]=temp;
        }
    }
    /*for(i=1;i<=r;++i){
        for(j=1;j<=c;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(i=1;i<=r;++i){
        for(j=1;j<=c;++j){
            dp[i][j]+= dp[i-1][j];
        }
        cout<<endl;
    }
    /*for(i=1;i<=r;++i){
        for(j=1;j<=c;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cin>>q;
    while(q--){
        cin>>x1>>y1>>x2>>y2;
        gold=0;
        gold+= dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
        /*for(i=x1;i<=x2;++i){
            for(j=y1;j<=y2;++j){
                gold+= g[i][j];
            }
        }*/
        cout<<gold<<endl;
    }
}
