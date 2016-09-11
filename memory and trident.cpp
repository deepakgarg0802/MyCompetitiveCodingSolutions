#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int main() {
	// your code goes here
    char str[MAX];
    int left=0,right=0,up=0,down=0,i,ans;
    cin>>str;
    
    for(i=0;i<strlen(str);++i){
        
        if(str[i]=='L'){
            left++;
        }
        else if(str[i]=='R'){
            right++;
        }
        else if(str[i]=='U'){
            up++;
        }
        else{
            down++;
        }
    }
    if((left+right+up+down)%2!=0){
        cout<<"-1\n";
        return 0;
    }
    int x=abs(up-down);
    int y=abs(left-right);
    //cout<<ans<<endl;
    if(x>=y){
        ans= y+((x-y)/2);
        cout<<ans<<endl;
    }
    else{
        ans= x+((y-x)/2);
        cout<<ans<<endl;
    }
    
    
	return 0;
}
