#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,m,i,j,x,y,flag;
    char a[4][20],b[4][20];
    cin>>t;
    
    while(t--){
        flag=0;
        for(i=0;i<4;++i){
            cin>>a[i];
        }    
        for(i=0;i<4;++i){
            cin>>b[i];
            for(j=0;j<4;++j){
                if(strcmp(a[j],b[i])==0){
                    flag++;
                }
            } 
        } 
        if(flag>=2){
            cout<<"similar"<<endl;    
        }
        else{
            cout<<"dissimilar"<<endl;
        }
    }
    
    return 0;
}    
