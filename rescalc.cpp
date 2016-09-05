#include<bits/stdc++.h>
 
using namespace std;
 
int findnonzero(int *a,int size){
    int count=0;
    for(int i=0;i<size;++i){
        if(a[i]>0){
            ++count;
        }
    }
    return count;
}
int main(){
    
    int t,type[6],i,j,n,temp,c,cur_points,win_pt;
    cin>>t;
    
    while(t--){
        cin>>n;
        win_pt=-1;
        int tie=0;
        int winner=-1;
        
        for(i=0;i<n;++i){
            cin>>c;
            cur_points=c;
            type[0]=type[1]=type[2]=type[3]=type[4]=type[5]=0;
            
            for(j=0;j<c;++j){
                cin>>temp;
                type[temp-1]++;
            }
            int nonzero= findnonzero(type,6);
            while(nonzero>=4){
                
                if(nonzero==6){
                    cur_points+=4;
                }
                else if(nonzero==5){
                    cur_points+=2;
                }
                if(nonzero==4){
                    cur_points+=1;
                }
                for(int x=0;x<6;++x){
                    type[x]--;
                }    
                nonzero= findnonzero(type,6);
            }
            //cout<<i<<" : "<<cur_points<<endl;
            if(cur_points==win_pt){
                tie=1;
                winner=i+1;
            }
            else if(cur_points>win_pt){
                tie=0;
                win_pt=cur_points;
                winner=i+1;
            }
        }
        if(tie==1){
            cout<<"tie\n";
        }
        else if(winner==1){
            cout<<"chef\n";
        }
        else{
            cout<<winner<<"\n";
        }
    }
    return 0;
} 
