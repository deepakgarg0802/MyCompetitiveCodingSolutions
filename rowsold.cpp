#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,m,i,j;
    long long x,y,flag,len,zero,one;
    char a[MAX];
    cin>>t;
    
    while(t--){
        cin>>a;
        len= strlen(a);
        x=zero=one=0;
        y=0;
        
        for(i=len-1;i>=0;--i){
            /*DEBUG(a[i]);DEBUG(zero);
            DEBUG(x);
            DEBUG(y);cout<<endl;*/
            
            if(a[i]=='0'){
                zero++;
            }    
            else if(a[i]=='1' && zero>0){
                y= zero+y+1;
                x+= y;
                zero=0;
            }
            else if(a[i]=='1' && zero==0){
                x+=y;
            }
        }
        cout<<x<<endl;
    }
    
    return 0;
}    
