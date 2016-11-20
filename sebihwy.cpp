#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
 
int main(){
    int i,j,t,n;
    double speed,s,sg,fg,d,time;
    cin>>t;
    while(t--){
        cin>>s>>sg>>fg>>d>>time;
        
        speed= ((180*d)/time)+s;
        ///////cout<<speed<<" ";
        if(abs(sg-speed) < abs(fg-speed)){
            cout<<"SEBI\n";
        }
        else if(abs(sg-speed) > abs(fg-speed)){
            cout<<"FATHER\n";
        }
        else
            {
            cout<<"DRAW\n";
        }
    }
    return 0;
} 
