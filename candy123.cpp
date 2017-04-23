#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    long long int t,n,q,i,j,l,r,b,x,y,temp,count,ans,len;
    
    cin>>t;
    
    while(t--){
        cin>>l>>b;
        x=y=0;
        
        for(i=1;;++i){
            x+=i;
            //DEBUG(x);
            if(x>l){
                q=1;
                break;
            }
            ++i;
            y+=i;
            //DEBUG(y);
            if(y>b){
                q=2;
                break;
            }
        }
        
        if(q==1){
            cout<<"Bob\n";
        }
        else{
            cout<<"Limak\n";
        }
    }
    
    return 0;
} 
