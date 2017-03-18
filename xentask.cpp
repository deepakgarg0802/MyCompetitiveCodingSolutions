#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    long long t,n,a[MAX],b[MAX],x,y,temp;
    //t=1;
    cin>>t;
    
    while(t--){
        cin>>n;
        x=y=0;
        
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        for(int i=0;i<n;++i){
            if(i%2==0)
                x+=a[i];
            else
                x+=b[i];
        }
        for(int i=0;i<n;++i){
            if(i%2!=0)
                y+=a[i];
            else
                y+=b[i];
        }
        cout<<min(x,y)<<endl;
    }
    
    return 0;
}
