#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){
    
    int n,t,sum,i,a[MAX],j,curr_sum,temp,start=0,end=0;
    int x,y;
    cin>>n>>sum;
    
    for(i=0;i<n;++i)
        cin>>a[i];
   
    curr_sum=a[0];
    for(i=1;i<=n;++i)
    {
        while(curr_sum>sum && start<i-1){
            curr_sum-=a[start];
            start++;
        }
        if(curr_sum==sum){
            x=start;
            y=i;
            cout<<start<<" "<<i<<endl;
        }
        if(i<n)
            curr_sum+=a[i];
    }
    
    return 0;
}
