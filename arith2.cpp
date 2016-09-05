#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long t,a,b,res;
    char op;
    cin>>t;
    
    while(t--){
        op='n';
        a=0;
        b=0;
        cin>>a;
        cin>>op;
        
        while(op!='='){
            cin>>b;
            if(op=='*'){
                a= a*b;
                cin>>op;
            }
            else if(op=='+'){
                a= a+b;
                cin>>op;
            }
            else if(op=='/'){
                a= a/b;
                cin>>op;
            }
            else if(op=='-'){
                a= a-b;
                cin>>op;
            }
        }
        if(op=='='){
            cout<<a<<endl;
        }
        
    }
    return 0;
}
