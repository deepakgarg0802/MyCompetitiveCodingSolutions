#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,j,x;
    char ch;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        x=n%8;
        if(x==1){
            ch='l'; 
            cout<<n+3<<"LB\n";
        }
        else if(x==2){
            ch='m'; 
            cout<<n+3<<"MB\n";   
        }
        else if(x==3){
            ch='u'; 
            cout<<n+3<<"UB\n";   
        }
        else if(x==4){
            ch='s'; 
            cout<<n-3<<"LB\n";   
        }
        else if(x==5){
            ch='l';
            cout<<n-3<<"MB\n";    
        }
        else if(x==6){
            ch='m';    
            cout<<n-3<<"UB\n";
        }
        else if(x==7){
            ch='u';    
            cout<<n+1<<"SU\n";
        }
        else if(x==0){
            ch='s';    
            cout<<n-1<<"SL\n";
        }
    }
    return 0;
}  
