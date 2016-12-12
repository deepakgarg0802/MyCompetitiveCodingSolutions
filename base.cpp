#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    long long t,n,i,count,j,x,rem,quo;
    
    cin>>t;
    
    while(t--)
    {
        cin>>x;
        n=x;
        count=0;
        if(x==1){
            cout<<"INFINITY\n";
            continue;
        }
        if(x==0){
            cout<<"0\n";
            continue;
        }
        for(i=2;i<x;++i)
        {
            //DEBUG(i);
            n=x;
            
            rem=n%i;
            quo=n/i;
            //DEBUG(rem);
            //DEBUG(quo);
            while(quo!=0){
                n=quo; 
                rem=n%i;
                quo=n/i;
                //DEBUG(rem);
                //DEBUG(quo);
            }
            if(rem==1){
                ++count;    
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}  
