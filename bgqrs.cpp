#include<bits/stdc++.h>

#define MAX 100000
using namespace std;

int numof2[100000]={0},numof5[100000]={0};

int finddiv(int x,int div)
{
    int z=0;
    while(x && x%div==0){
        z++;
        x/=div;
    }
    return z;
}    

void updatex(long long *div2,long long *div5,long long left,long long right,long long  x)
{
    left--;
    right--;
    int p=0,q=0;
    
    //find number of 2 and 5 in divisors of temp
    p= finddiv(x,2);
    q= finddiv(x,5);
    
    //add 2's and 5's
    for(int i=left; i<=right; ++i){
        div2[i]+=p;
        div5[i]+=q;
        //cout<<"updt x 2:"<<div2[i]<<" 5:"<<div5[i]<<endl;
    }
}   

void updatey(long long *div2,long long *div5,long long left,long long right,long long y)
{
    left--;
    right--;
    int p=0,q=0;
    int temp=y;
    
    //find number of 2 and 5 in divisors of temp
    p= finddiv(temp,2);
    q= finddiv(temp,5);
    
    
    for(int i=left,j=0; i<=right; ++i,++j)
    {
        div2[i]=p+numof2[j];
        div5[i]=q+numof5[j];
        
        ////cout<<"updt y 2:"<<div2[i]<<" 5:"<<div5[i]<<"\t";
    }
}  

int product(long long *div2,long long *div5,long long left,long long right)
{
    left--;
    right--;
    int p=0,q=0;
    //long long temp=0;
    int zero=0;
    
    for(int i=left; i<=right; ++i){
        p+=div2[i];
        q+=div5[i];
        
    }
    zero = min(p,q);
    ////cout<<"zero : "<<zero<<endl;
    return zero;
} 

int main(){
    
    int t,i,j,p,q;
    long long a[MAX]={0},x,y,l,r,query,n,m,ans,div2[MAX]={0},div5[MAX]={0};
    scanf("%d",&t);
    
    //populate number of times element is divisble by 2 and 5
    for(i=0;i<MAX;++i){
        int temp= i,p=0,q=0;
        
        p= finddiv(temp+1,2);
        q= finddiv(temp+1,5);
        
        numof2[i]=p;
        numof5[i]=q;
    }
    
    //running test cases
    while(t--){
        scanf("%lld %lld",&n,&m);
        ans=0;
        
        memset(div2,0,sizeof(div2));
        memset(div5,0,sizeof(div5));
        
        for(i=0;i<n;++i){
            scanf("%lld",&a[i]);
            int temp=a[i];
            
            div2[i]=finddiv(temp,2);
            div5[i]=finddiv(temp,5);
            ////cout<<"2:"<<div2[i]<<" 5:"<<div5[i]<<"\t";
        }
        
        while(m--)
        {
            scanf("%lld",&query);
            switch(query)
            {
                case 1 : scanf("%lld%lld%lld",&l,&r,&x);
                        updatex(div2,div5,l,r,x);
                        break;
                case 2 : scanf("%lld%lld%lld",&l,&r,&y);
                        updatey(div2,div5,l,r,y);
                        break;
                case 3 : scanf("%lld%lld",&l,&r);
                        ans+= product(div2,div5,l,r);
                        
            }    
        }
        printf("%lld\n",ans);
    }
}
