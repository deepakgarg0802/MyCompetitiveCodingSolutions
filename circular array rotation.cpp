#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k,n,q,m,x;
    vector <int> a;
    cin>>n>>k>>q;
    
    for(int i=0;i<n;++i){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<q;++i){
        cin>>m;
        x= m-k;
        if(x<0)
            x=((x%(-n))+n)%n;
        else
            x=x%n;
        
        //cout<<x<<"\n";
        cout<<a[x]<<"\n";
    }
    return 0;
}
