#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch[10000],ans[10000];
    int n,len,i,l,r,j,mid;
    cin>>n>>ch;
    len=n;
    i=0;
    j=0;
    len--;
    
    
    if(len%2==0)//odd
    {
        i=len/2;
        for(j=0;i<n;j+=2){
            ans[i]=ch[j];
            //cout<<j<<":"<<ans[j]<<"--";
            ++i;
        }
        i=(len/2)-1;
        for(j=1;i>=0;j+=2){
            ans[i]=ch[j];
            //cout<<j<<":"<<ans[j]<<"--";
            --i;
        }
        ans[n]='\0';
    }
    else//even
    {
        i=n/2;
        for(j=1;i<n;j+=2){
            ans[i]=ch[j];
            //cout<<j<<":"<<ans[j]<<"--";
            ++i;
        }
        i=(n/2)-1;
        for(j=0;i>=0;j+=2){
            ans[i]=ch[j];
            //cout<<j<<":"<<ans[j]<<"--";
            --i;
        }
        ans[n]='\0';
    }
    cout<<ans;
    
    return 0;
}
