#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;

int divisible(int num[],int len,int div){
    int i,sum=0,ans=0;
    switch(div){
        case 0: ans= -1;
                break;
        
        case 1: ans= 1;
                break;
        
        case 2: if(num[len-1] %2 ==0)
                    ans= 1;
                else
                    ans= -1;
                break;
        
        case 3: for(i=0;i<len;++i)
                    sum+= num[i];
                if(sum%3==0)
                    ans= 1;
                else 
                    ans= -1;
                break;
       
        case 4: sum=0;
                if(len==1)
                {   if(num[len-1]%4==0)
                        ans= 1;
                    else ans= -1;
                }
                sum= num[len-2]*10 + num[len-1];
                if(sum%4==0)
                    ans= 1;
                else 
                    ans= -1;
                break;
        
        case 5: if(num[len-1]==0 || num[len-1]==5)
                    ans= 1;
                else
                    ans= -1;
                break;
        
        case 6: if(divisible(num,len,2)==1 && divisible(num,len,3)==1)
                    ans= 1;
                else 
                    ans= -1;
                break;
        
        case 7: i=0;
                sum=num[i];
                while(1){
                    sum= sum%7;
                    if(i+1 >=len)
                        break;
                    sum= sum*10 + num[++i];
                }
                if(sum==0)
                    ans= 1;
                else
                    ans= -1;
                break;
        
        case 8: if(len==1)
                {   if(num[len-1]%8==0)
                        ans= 1;
                    else 
                        ans= -1;
                }
                else if(len==2)
                {   sum= num[len-2]*10 + num[len-1];
                    if(sum%8==0)
                        ans= 1;
                    else 
                        ans= -1;
                }
                else{
                    sum= num[len-3]*100+num[len-2]*10 + num[len-1];
                    if(sum%8==0)
                        ans= 1;
                    else 
                        ans= -1;
                }
        
                break;
        
        case 9: for(i=0;i<len;++i)
                    sum+= num[i];
                if(sum%9==0)
                    ans= 1;
                else 
                    ans= -1;
    }
    return ans;
    
}

int main(){
    int i,j,n,t,ans=0;
    
    int dp[10]={0};// not checked
    int len=0,num[240];
    char ch;
    char s[MAX];
    cin>>s;
    i=0;
    len =strlen(s);
    
    while(i<len){
        num[i]=s[i] -'0';
        
        ++i;
    }
    
    for(i=0;i<len;++i)
    {
        //DEBUG(num[i]);
        
        if( dp[num[i]]==1)
            ++ans;
        else if(dp[num[i]]==0){
            dp[num[i]]= divisible(num,len,num[i]);
            if(dp[num[i]]==1)
                ++ans;
        }
        //DEBUG(dp[num[i]]);
        //DEBUG(ans);
    }
    cout<<ans<<endl;
    return 0;
} 
