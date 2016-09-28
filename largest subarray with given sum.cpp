#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){
    
    int n,t,sum,i,a[MAX],j,curr_sum,temp;
    int x,y;
    cin>>n>>sum;
    
    for(i=0;i<n;++i)
        cin>>a[i];
   
    for(i=0;i<=n;++i)
    {
        curr_sum=a[i];
        if(curr_sum==sum){
            x=i;
            y=i;
            cout<<x<<"to "<<y<<" len : "<<y-x+1<<endl;
        }
        for(j=i+1;j<n;++j)
        {
            curr_sum+=a[j];
            
            if(curr_sum==sum){
                x=i;
                y=j;
                cout<<x<<"to "<<y<<" len : "<<y-x+1<<endl;
            }
            else if(curr_sum>sum){
                break;
            }
            
        }
    }
    
    return 0;
}
