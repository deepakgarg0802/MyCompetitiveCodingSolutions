#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int main(){
    long long int t,x,n,count,temp;
    
    cin>>t;
    //t=1;
 
    while(t--)
    {
        cin>>n>>x;
        temp= n/x;
        if(temp*x == n){
            temp--;
        }
        cout<<n-(temp*x)<<endl;
    }
    return 0;
}   
