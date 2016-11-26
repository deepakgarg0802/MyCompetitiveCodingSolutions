#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
 
int main(){
    int i,j,t;
    char str[100002];
    
    cin>>t;
    while(t--){
        cin>>str;
        j=0;
        
        int len= strlen(str);
        for(i=0;i<len;++i){
            if(str[i]=='<')
                {
                str[i]='>';
            }
            else if(str[i]=='>')
                {
                str[i]='<';
                if(i-1 >0 && str[i-1]=='>'){
                    j++;
                }
            }
        }
        
        cout<<j<<"\n";
    }
    return 0;
}  
