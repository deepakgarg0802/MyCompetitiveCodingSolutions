#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int calc(long long int x,ll y){
    ll a0= 1+ 2*x + (x*(x-1))/2;
    ll rank = a0+ (y*(x+1)) + (y*(y-1))/2;
    return rank;
}
 
int main()
{
    long long int t,n,flag,a,b,c,x,y,z,i,j,k;
    //char str[MAX];
    
    cin>>t;
    //t=1;
    
    while(t--){
        cin>>x>>y;
        a= max(calc(x,0), calc(y,0));
        b= max(calc(x,y), 1);
        flag= max(a,b);
        
        cout<<flag<<endl;
        
    }
    return 0;
} 
