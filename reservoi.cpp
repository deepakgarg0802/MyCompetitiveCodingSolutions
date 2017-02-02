#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,m,flag,i,j,temp,x;
    char tank[1000][1000]={0};
    
    cin>>t;
    
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;++i){
            cin>>tank[i];
        }
        flag=1;
        
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(tank[i][j]=='B')
                {
                    if(i+1<n) //check below
                    {
                        if(tank[i+1][j]=='W' || tank[i+1][j]=='A'){
                            flag=0;
                            //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<" ";
                            break;
                        }
                    }    
                }
                else if(tank[i][j]=='W')
                {
                    if(j==0 || j==m-1) //left and right boundary
                    {
                        flag=0;
                        //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<"1 ";
                        break;    
                    }
                    else if(j-1>=0 && tank[i][j-1]=='A')//check left
                    {
                        flag=0;
                        //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<"2 ";
                        break;    
                    }
                    else if(j+1<m && tank[i][j+1]=='A')//check right
                    {
                        flag=0;
                        //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<"3 ";
                        break;    
                    }
                    else if(i+1<n) //check below
                    {
                        if(tank[i+1][j]=='A'){
                            flag=0;
                            //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<"4 ";
                            break;
                        }
                    }   
                    else if(i-1>=0) //check above
                    {
                        if(tank[i-1][j]=='B'){
                            flag=0;
                            //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<"5 ";
                            break;
                        }
                    }   
                }
                else if(tank[i][j]=='A')
                {
                    if(i-1>=0) //check above
                    {
                        if(tank[i-1][j]=='B' || tank[i-1][j]=='W'){
                            flag=0;
                            //cout<<tank[i][j]<<"  "<<i<<"  "<<j<<" ";
                            break;
                        }
                    }       
                }
                    
            }
            if(flag==0){
                break;
            }
        }
        if(flag==0){
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
    }
    return 0;
}   
