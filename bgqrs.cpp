#include<bits/stdc++.h>

#define MAX 100000
using namespace std;

void updatex(long long *a,long long size,long long left,long long right,long long  x)
{
    left--;
    right--;
    for(int i=left; i<=right; ++i){
        a[i]*=x;
    }
}   

void updatey(long long *a,long long size,long long left,long long right,long long y)
{
    left--;
    right--;
    for(int i=left,j=1; i<=right; ++i,++j){
        a[i]=j*y;
    }
}  

int product(long long *a,long long size,long long left,long long right)
{
    left--;
    right--;
    long long temp=1;
    int zero=0;
    
    for(int i=left; i<=right; ++i){
        temp= temp*a[i];
    }
    //cout<<temp<<endl;
    while(temp && temp%10==0){
        zero++;
        temp/=10;
    }
    //cout<<"zero : "<<zero<<endl;
    return zero;
} 

int main(){
    
    int t;
    long long a[MAX]={0},x,y,l,r,q,n,m,i,j,ans;
    cin>>t;
    
    while(t--){
        cin>>n>>m;
        ans=0;
        
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        
        while(m--)
        {
            cin>>q;
            switch(q)
            {
                case 1 : cin>>l>>r>>x;
                        updatex(a,n,l,r,x);
                        break;
                case 2 : cin>>l>>r>>y;
                        updatey(a,n,l,r,y);
                        break;
                case 3 : cin>>l>>r;
                        ans+= product(a,n,l,r);
                        
            }    
        }
        cout<<ans<<endl;
    }
}
