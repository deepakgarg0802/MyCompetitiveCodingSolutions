#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,a[MAX]={0},i,j,flag;
    long long due;
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        due=0;
        
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        j=1;
        for(i=0;i<n;++i){
            if(a[i]==0)
            {
                flag=0;
                j=max(j,i+1);
                for(;j<n;++j){
                    if(a[j]==1){
                        a[j]=0;
                        flag=1;
                        //++j;
                        break;
                    }    
                }
                if(flag==1){
                    due+=100;
                    flag=0;
                }
                else//rest all are 0
                {
                    due+=(n-i)*1100;
                    break;
                }
            }
        }
        printf("%lld\n",due);
    }
    
    return 0;
}  
