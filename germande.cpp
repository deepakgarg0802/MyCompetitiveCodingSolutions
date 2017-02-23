#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
int main()
{
    int t,a[MAX],state[MAX],total,i,j,k,ans,temp,states,dist,len,x,y;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d%d",&states,&dist);        
        len=states*dist;
        total=0;
        
        memset(state,0,sizeof(state));
        
        for(i=0;i<len;++i){
            scanf("%d",&a[i]);
            
            state[i/dist]+=a[i];
            if((i+1)%dist==0){
                if(state[i/dist]>= (dist+1)/2){
                    total+=1;
                }
            }
        }
        
        /*for(i=0;i<states;++i){
            DEBUG(state[i]);
        }
        cout<<endl;*/
        
        if(total>= (states+1)/2){
            cout<<"1\n";
            continue;
        }
        ans=0;
        
        for(i=1;i<dist;i++)
        {
            total=0;
            for(j=0;j<states;j++)
            {
                x=((j*dist)+i-1)%len;
                y=(dist*(j+1)+i-1)%len;
                /*DEBUG(x);
                DEBUG(y);*/
                state[j]= state[j] - a[x] + a[y];
                
                if(state[j]>= (dist+1)/2){
                    total+=1;
                }
                ///DEBUG(state[j]);
            }
            /*DEBUG(total);
            cout<<endl;*/
            if(total>= (states+1)/2){
                ans=1;
                break;
            }
            
        }
        
        cout<<ans<<endl;
    }
    return 0;
}   
