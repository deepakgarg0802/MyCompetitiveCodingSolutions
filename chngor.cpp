#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,i,j,x,y,n;
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        for(i=0;i<n;++i){
            cin>>y;
            x=x|y;
        }
        cout<<x<<endl;
    }
    return 0;
} 
