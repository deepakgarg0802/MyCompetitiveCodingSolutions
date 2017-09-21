#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int z,n,i,j,x,y,ans,flag;
    cin>>z;
    
    char s[1000],t[1000],w[2000];
    
    int a[26],b[26],c[26];
    
    while(z--){
        cin>>s>>t;
        ans=flag=1;
        
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        
        for(i=0;s[i]!='\0';++i){
            a[s[i]-'a']++;
        }
        for(i=0;t[i]!='\0';++i){
            b[t[i]-'a']++;
        }
        
        x=0;
        for(i=0;i<26;++i){
            if(a[i]>=2 && b[i]==0){
                ans=0;
                //cout<<" "<<a[i];
                flag=0;
                break;
            }
        } 
        
        if(flag)
        {
            for(j=0;s[j]!='\0';++j){
                x=y=0;
                for(i=0;i<26;++i){
                    if(a[i]>0 && b[i]==0){
                        x+=1;
                        a[i]--;
                        break;
                    }
                } 
                for(i=0;i<26;++i){
                    if(b[i]>0 && a[i]==0){
                        y+=1;
                        b[i]--;
                        break;
                    }
                }  
 
                if(x==0){
                    ans=1;
                    //cout<<" 2 ";
                    break;
                }
                else if(y==0){
                    ans=0;
                    break;
                }
            }
        }
        if(ans==1){
            cout<<"B\n";
        }
        else{
            cout<<"A\n";
        }
    }
    
    return 0;
}  
