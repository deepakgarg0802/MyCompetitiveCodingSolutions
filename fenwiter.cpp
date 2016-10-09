#include<bits/stdc++.h>

#define MAX 100000
using namespace std;

long long countsetbits(bool a[],int len)
{
    long long x=0;
    
    for(int i=0;i<len;++i){
        if(a[i]==1){
            ++x;
        }
    }
    
    return x;
}   

int inputL(bool a[])
{
    int len=0;
    char ch;
    
    while((ch=getchar()) != ' ' )
    {
        if(ch=='1'){
            a[len]=1;
            len++;
        }    
        else if(ch=='0'){
            a[len]=0;
            len++;
        }
        cout<<a[len-1];
    }  
    cout<<" ";  
    return len;
}   

int main(){
    
    int t,i,j,n,pos;
    long long ans=0;
    bool l1[1004],l2[1004],l3[1004],x[1004];
    int len1,len2,len3;
    char ch;
    
    cin>>t;
    
    while(t--){
        len1=len2=len3=0;
        ans=0;
        
        getchar();
        //input L1 array
        len1= inputL(l1);
        len2= inputL(l2);
        len3= inputL(l3);
        
        cin>>n;
        
        //find position of last clear bit and clear all bits after it
        
        pos=-1;
        
        for(i=len3-1;i>=0;--i){
            if(l3[i]==0){
                pos=i;
                
                for(j=i;j<len3;++j){
                    l3[j]=0;
                }
                ans=countsetbits(l1,len1)+n*countsetbits(l2,len2)+countsetbits(l3,len3);
                break;
            }
        }
        
        if(pos==-1) // search in L2
        {
            for(i=len2-1;i>=0;--i){
                if(l2[i]==0)
                {
                    pos=i;
                    
                    ans= countsetbits(l2,len2) * (n-1);

                    for(j=i;j<len2;++j){
                        l2[j]=0;
                    }

                    ans+=countsetbits(l2,len2);
                    ans+=countsetbits(l1,len1);
                    break;
                }
            }    
        }
        
        if(pos==-1) // search in L3
        {
            for(i=len1-1;i>=0;--i)
            {
                if(l1[i]==0){
                    pos=i;
                    for(j=i;j<len1;++j){
                        l1[j]=0;
                    }
                    ans= countsetbits(l2,len2);
                    break;
                }
            }    
        }
        
        cout<<ans+1<<endl;
    }
}
