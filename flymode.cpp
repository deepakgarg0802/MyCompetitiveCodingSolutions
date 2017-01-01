#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,len,count=0,temp,k,x,y;
    //vector < pair<int,int> > c;
    int c[MAX]={0};
    cin>>n;
    cin>>x;
    
    for(i=1;i<n;++i)
    {
        cin>>y;
        if(x<y)
        {
            for(j=x;j+0.5 < y;++j){
                c[j-1]++;
            }
            x=y;
        }
        else{
            for(j=y;j+0.5 < x;++j){
                c[j-1]++;
            }
            x=y;
        }
    }
    
    for(i=0;i<MAX;++i){
        if(c[i]>count){
            count=c[i];
        }    
    }
    cout<<count<<endl;
    return 0;
}   
