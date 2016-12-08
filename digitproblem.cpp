#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;


int main(){
    int k,i,j;
    
    char x[100];
    cin>>x>>k;
    i=0;
    //DEBUG(x);
    while(x[i]!='\0' && k>0){
        if(x[i]!='9'){
            x[i]='9';
            --k;
        }
        ++i;
    }
    cout<<x<<endl;
    return 0;
} 
