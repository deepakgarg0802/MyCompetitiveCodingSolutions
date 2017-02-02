#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    long long t,n,cat_l,c,dog_l,cat,dog,leg;
    cin>>t;
    
    while(t--){
        cin>>cat>>dog>>leg;
        if(leg%4!=0 || (dog*4 >leg)){
            cout<<"no\n";
            continue;
        }
        cat_l=leg-(dog*4);
        c= cat_l/4;//cats on ground
        if(c>cat){
            cout<<"no\n";
            continue;
        }
        n= cat-c;//cats on back
        
        if(n>=0 && n<= (2*dog)){
            cout<<"yes\n";   
        }
        else{
            cout<<"no\n";    
        }
    }
    return 0;
}   
