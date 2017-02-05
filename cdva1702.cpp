#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
void pre(int *a, int *b, int n){
    int i,j,temp,x;
    
    for(i=2;i<n;++i){
        a[i]=i+1;
        b[i]=1;
    }
    temp=sqrt(n);
    for(i=2;i<=temp;++i){
        j=2;
        x=pow(i,j);
        while(x<n){
            a[x]+=i+j;
            b[x]++;
            ++j;
            x=pow(i,j);
        }
    }    
}
 
int main(){
    long long int t,x,n,count,temp;
    int a[MAX]={0};
    int num[MAX]={0};
    
    cin>>t;
    //t=1;
    pre(a,num,MAX);
    
    while(t--)
    {
        cin>>n;
        cout<<num[n]<<"\n"<<a[n]<<"\n";
    }
    return 0;
}   
