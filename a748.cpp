#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,lane,num,desk;
    //vector < pair<int,int> > c;
    //int c[MAX]={0};
    //cin>>t;
    t=1;
    while(t--){
        cin>>lane>>desk>>num;
        
        i= ceil(num/(2.0 * desk));
        num= num% (2*desk);
        if(num==0)
            j=desk;
        else
            j= ceil(num/(2.0 ));
        if(num%2==0){
            cout<<i<<" "<<j<<" R\n";
        }
        else{
            cout<<i<<" "<<j<<" L\n";
        }
    }
    return 0;
}  
