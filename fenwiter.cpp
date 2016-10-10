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
        ////cout<<a[len-1];
    }  
    ////cout<<" ";  
    return len;
}   

int addbool(bool l[],int len,int c){
    
    int temp=0;
    int carry =c;
    
    for(int i=len-1;i>=0;--i){
        if(carry==0){
            break;
        }    
        else{
            if(l[i]==0){
                l[i]=1;
                carry=0;
                break;
            }
            else{
                l[i]=0;
                carry=1;
            }
        }
        ///cout<<l[i]<<" ";
    }
    ///cout<<endl;
    return carry;
}

int main(){
    
    int t,i,j,carry;
    long long ans=0,n,temp;
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
        
        //add 1 to the number and find number of set bits
        
        carry=0;
        
        //add 1 to L3
        carry=addbool(l3,len3,1);
        if(carry==0)
        {
            ans=countsetbits(l3,len3)+countsetbits(l1,len1)+ n*countsetbits(l2,len2);    
        }
        else
        {
            //store number of set bits in original L2
            temp=countsetbits(l2,len2);
            ////cout<<ans<<" ";

            carry=addbool(l2,len2,carry);

            if(carry==0){
                ans=countsetbits(l1,len1)+(n-1)*temp+ countsetbits(l2,len2);
                ////cout<<ans<<" ";
            }
            else{
                carry=addbool(l1,len1,carry); 
                ans=countsetbits(l1,len1)+carry;
                ////cout<<ans<<" ";
            }
        }
        cout<<ans<<endl;
    }
}
