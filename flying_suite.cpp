#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a,b,i,j,x;
    char ch[100000];
    cin>>n>>a>>b;
    cin>>ch;
    a--;
    b--;
    
    if(ch[a]==ch[b]){
        cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
    /*else if(a<b){
        for(i=n-1;i>=0;--i){
            if(ch[i]==ch[a]){
                x=b-i;
                break;
            }
        }
    }
    else{
        for(i=0;i<n;++i){
            if(ch[i]==ch[a]){
                x=b-i;
                break;
            }
        }
    }*/
    return 0;
}
