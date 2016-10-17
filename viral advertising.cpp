#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,count,num=5;
    cin>>n;
    count=0;
    
    for(i=1;i<=n;++i){
        count+= num/2;
        num=num/2;
        num=num*3;
    }
    cout<<count<<endl;
    
    return 0;
}
